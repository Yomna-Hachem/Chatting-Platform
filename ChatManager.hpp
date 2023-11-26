#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector> 
#include <list>
#include <algorithm>
#include <cstring>
#include <string>
#include <iterator>

#include "Hmap.hpp"

 
class ChatManager{

  public:

    Hmap<string, Chat> chatmap;
    void createChat(User* user1, User* user2);
    void sendMessage(string& chatID, string content, string senderID, bool found);









 };

 
