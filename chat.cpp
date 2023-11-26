#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector> 
#include <list>
#include <algorithm>
#include <cstring>
#include <string>
#include <iterator>
#include "User.cpp"
#include "Message.cpp"
using namespace std;

class Chat {
private:
    string chatID;
    User user1;
    User user2;
    vector<Message> allChatMessages;
public:
    Chat(string id, User& u1, User& u2) {
        chatID = id;
        user1 =u1;
        user2 = u2;
    }

    string getChatID() {
        return chatID;
    }

    User getUser1 (){
        return user1;
    }

     User getUser2 (){
        return user2;
    }


};