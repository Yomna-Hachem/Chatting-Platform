 
 class ChatManager{

    private:

       Hmap<int , chat > map;

void createChat(string chatID, vector<User*> participants){
 //void createChat(string chatID, vector<int> participants) {
        Chat* newChat = new Chat(chatID, participants);
        insert(chatID ,newChat);
        // int index = hash(chatID);
        //map[index]= newChat;
    }





 };

 
