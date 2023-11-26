#include "ChatManager.hpp"
#include "chat.hpp"

void ChatManager::createChat(User* user1, User* user2){
    //generate chat id somehow
    
    string chatID  ;

    Chat* newChat = new Chat(chatID, user1 , user2);
    chatmap.insert(chatID , *newChat); //msh moktane3 b * de bs mashalsh error gher beha
        
        
}

void ChatManager::sendMessage(string& chatID, string content, string senderID, bool found){
    Chat* chat = chatmap.search(chatID, found); // Use the search function
    if (found && chat != nullptr) {
        Message* m = new Message(content, senderID);
        chat->allChatMessages.push_back(*m);
    }
    else{
        cerr<<"ERROR NULL POINTER IN CHATT SENDING A MESSAGE";
    }
}
