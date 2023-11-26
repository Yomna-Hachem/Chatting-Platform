#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector> 
#include <list>
#include <algorithm>
#include <cstring>
#include <string>
#include <chrono>
#include <iterator>

using namespace std;

class Message {
private:
    // string messageID;
    string content;
    string senderID;
    chrono::time_point<std::chrono::system_clock> timestamp;
public:
    Message(string text, string senderID) ;

    // string getMessageID() {
    //     return messageID;
    //  } 

    string getContent();

    string getSender() ;
};