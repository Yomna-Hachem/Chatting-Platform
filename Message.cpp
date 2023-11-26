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

#include "Message.hpp"
using namespace std;


    Message::Message(string text, string senderID) {
        // messageID = id;
        content = text;
        senderID = senderID;
        timestamp = chrono::system_clock::now();
    }

    // string getMessageID() {
    //     return messageID;
    //  } 

    string Message::getContent() {
        return content;
    }

    string Message::getSender() {
        return senderID;
    }