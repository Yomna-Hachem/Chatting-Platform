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

class Message {
private:
    string messageID;
    string content;
    User* sender;
public:
    Message(string id, string text, User* user) {
        messageID = id;
        content = text;
        sender = user;
    }

    string getMessageID() {
        return messageID;
    }

    string getContent() {
        return content;
    }

    User* getSender() {
        return sender;
    }
};