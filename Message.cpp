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
    auto timestamp; 
public:
    Message(string text, string senderID) {
        // messageID = id;
        content = text;
        this.senderID = senderID;
        timestamp = chrono::system_clock::now();
    }

    // string getMessageID() {
    //     return messageID;
    //  } 

    string getContent() {
        return content;
    }

    string getSender() {
        return senderID;
    }
};