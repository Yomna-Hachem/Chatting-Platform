#include "User.hpp"
#include "ChatManager.hpp"
#include "chat.hpp"

using namespace std;



    User::User() {
       
    }
    User::User(string id, string name, string Password) {
        userID = id;
        name = name;
        password = Password;
    }

    string User::getUserID() {
        return userID;
    }

    string User::getname() {
        return name;
    }

    string User::getPassword() {
        return password;
    }



/*
void User::createChat(User* user2){
    //generate chat id somehow
        
        string chatID;

        Chat* newChat = new Chat(chatID, this, user2);
        ChatManager::chatmap.insert(chatID , newChat);
        
        
}


void User::sendMessage(string& chatID, string content, string senderID, bool found){
    Chat* chat = ChatManager::chatmap.search(chatID, found);
    if (found) {
        Message* m = new Message (content, senderID);
        chat.allChatMessages.push_back(m);
    }
    
}
*/



/*void sendMessage(string chatID, string content, string senderID ){
    Message* newMessage = new Message(content, senderID);
    bool found;
    chatmap.search(chatID, found).allChatMessages.add(newMessage);
}*/
   

   



