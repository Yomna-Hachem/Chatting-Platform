#include "chat.hpp"
using namespace std;


    Chat::Chat(string id, User* u1, User* u2) {
        chatID = id;
        user1 =u1;
        user2 = u2;
    }

    string Chat::getChatID() {
        return chatID;
    }

    User* Chat::getUser1 (){
        return user1;
    }

    User* Chat::getUser2 (){
        return user2;
    }


