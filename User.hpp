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
    string name;
    string userID;
    string password;

public:

    User() ;
    User(string id, string name, string Password) ;

    string getUserID() ;

    string getname() ;

    string getPassword() ;


    void createChat(User* user2);


    void sendMessage(string& chatID, string content, string senderID, bool found);



/*void sendMessage(string chatID, string content, string senderID ){
    Message* newMessage = new Message(content, senderID);
    bool found;
    chatmap.search(chatID, found).allChatMessages.add(newMessage);
}*/
   

   
};

