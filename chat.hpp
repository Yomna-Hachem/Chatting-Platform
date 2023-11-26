#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector> 
#include <list>
#include <algorithm>
#include <cstring>
#include <string>
#include <iterator>

#include "User.hpp"
#include "Message.hpp"
using namespace std;

class Chat {
private:
    string chatID;
    User* user1;
    User* user2;
    vector<Message> allChatMessages;
public:
    Chat(string id, User* u1, User* u2);

    string getChatID() ;

    User* getUser1 ();

    User* getUser2 ();


};