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

class Chat {
private:
    string chatID;
    vector<User*> participants;
public:
    Chat(string id, vector<User*> users) {
        chatID = id;
        participants = users;
    }

    string getChatID() {
        return chatID;
    }

    vector<User*> getParticipants() {
        return participants;
    }
};