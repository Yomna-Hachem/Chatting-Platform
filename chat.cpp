#include "Chat.hpp"
#include <cstddef>
using namespace std;



    Chat::Chat( User* u1, User* u2) {
        chatID = counter++;
        user1 =u1;
        user2 = u2;
        allChatMessages = LinkedList<Message*>();
    }
    //badr

    int Chat::getChatID() {
        return chatID;
    }

    User* Chat::getUser1 (){
        return user1;
    }

    User* Chat::getUser2 (){
        return user2;
    }

    


