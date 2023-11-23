#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector> 
#include <list>
#include <algorithm>
#include <cstring>
#include <string>
#include <iterator>

using namespace std;

class User {
private:
    String userID;
    String username;
public:
    User(String id, String name) {
        userID = id;
        username = name;
    }

    String getUserID() {
        return userID;
    }

    String getUsername() {
        return username;
    }
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