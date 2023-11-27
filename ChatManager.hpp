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
#include "chat.hpp"

 
class ChatManager{

  public:

    Hmap<int, Chat> chatmap;
    void createChat(User* user1, User* user2);
    void sendMessage(int& chatID, string content, string senderID, bool found);









 };

 
