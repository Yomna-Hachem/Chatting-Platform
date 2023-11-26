#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector> 
#include <list>
#include <algorithm>
#include <cstring>
#include <string>
#include <iterator>
#include "HmapImplementation.cpp"
#include "ChatManager.cpp"

using namespace std;

class User {
private:
    string name;
    string userID;
    string password;

public:

    User() {
       
    }
    User(string id, string name, string Password) {
        userID = id;
        name = name;
        password = Password;
    }

    string getUserID() {
        return userID;
    }

    string getname() {
        return name;
    }

    string getPassword() {
        return password;
    }




void createChat(User* user2){
    //generate chat id somehow
        
        string chatID;
        Chat* newChat = new Chat(chatID, this, user2);
        chatmap.insert(chatID , newChat);
        
}


void sendMessage(string& chatID, string content, string senderID, bool found){
    Chat* chat = chatmap.search(chatID, found);
    if (found) {
        Message M = new Message (content, senderID);
        chat.allChatMessages.push_back(newMessage);
    }
    
}



/*void sendMessage(string chatID, string content, string senderID ){
    Message* newMessage = new Message(content, senderID);
    bool found;
    chatmap.search(chatID, found).allChatMessages.add(newMessage);
}*/
   

   
};


/*





class ChatManager {
private:
    map<string, Chat*> chats;
public:
    void createChat(string chatID, vector<User*> participants) {
        Chat* newChat = new Chat(chatID, participants);
        chats[chatID] = newChat;
    }

    void sendMessage(string chatID, string messageID, string content, User* sender) {
        if (chats.find(chatID) != chats.end()) {
            Message* newMessage = new Message(messageID, content, sender);
            // Add the new message to the appropriate chat
            chats[chatID]->addMessage(newMessage);
        }
    }

   
};






*/