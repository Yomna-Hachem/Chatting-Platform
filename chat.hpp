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
#include "LinkedList.hpp"
using namespace std;

class Chat {
private:
    int chatID;
    User* user1;
    User* user2;
    
    
public:
    
    static int counter;
    LinkedList<Message*>allChatMessages;
    Chat(User* u1, User* u2);

    int getChatID() ;

    User* getUser1 ();
    
    User* getUser2 ();

    int getCounter();
    
    void setCounter();

};