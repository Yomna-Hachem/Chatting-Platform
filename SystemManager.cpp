#include "SystemManager.hpp"

void SystemManager::createChat(User* user1, User* user2){
    //generate chat id somehow
    
    

    Chat* newChat = new Chat(user1 , user2);
    chatmap.insert(newChat->getChatID() , *newChat); //msh moktane3 b * de bs mashalsh error gher beha
        
        
}

void SystemManager::sendMessage(int& chatID, string content, string senderID, bool found){
    Chat* chat = chatmap.search(chatID, found); // Use the search function
    if (found && chat != nullptr) {
        Message* m = new Message(content, senderID);
        chat->allChatMessages.insert(m); //hwar reference 
    }
    else{
        cerr<<"ERROR NULL POINTER IN CHATT SENDING A MESSAGE";
    }
}
