#include "Hmap.hpp"

//check mysizee
//function DISPLAYYYY cout

    template <typename Tkey, typename Tvalue>
    Hmap<Tkey, Tvalue>::Node::Node(){



    }

    template <typename Tkey, typename Tvalue>
    Hmap<Tkey, Tvalue>::Node::Node(Tkey key, Tvalue value){
        key = key;
        value = value;
        next = NULL;
    }


    template <typename Tkey, typename Tvalue>
    Hmap<Tkey, Tvalue>:: Hmap(){


    }


    template <typename Tkey, typename Tvalue>
    Hmap<Tkey, Tvalue>:: ~Hmap(){ //hn3ml eh f da??
        // destroy all buckets one by one
        // leh mesh i++?
        for (int i = 0; i < TABLE_SIZE; ++i) {
            Node *entry = table[i];
            while (entry != NULL) {
                Node *prev = entry;
                entry = entry->next;
                delete prev;
            }
            table[i] = NULL;
        }
        // destroy the hash table
        delete [] table;
    }

    template <typename Tkey, typename Tvalue>
    void Hmap<Tkey, Tvalue>::  insert(const Tkey &key , const Tvalue &value){
        
        index = hash(key);
        if(index<0 || index > TableSize-1){
            cerr << "INDEX OUT OF BOUND";
        }else if(table[index] == NULL){

            table[index].key = key;
            table[index].value = value;
            table[index].next = NULL;

        } else{
            Node* ptr = table[index];
             Node* newnode = new Node(key, value);
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next=newnode;
            
           
            
        }


    }


    template <typename Tkey, typename Tvalue>
    int Hmap<Tkey, Tvalue>::hash(const Tkey &key){
        return (key%TableSize);
    }


    template <typename Tkey, typename Tvalue>
    void Hmap<Tkey, Tvalue>::erase(const Tkey &key){


        index = hash(key);
        if(index<0 || index > TableSize-1){
            cerr << "INDEX OUT OF BOUND";
        }else if(table[index] == NULL){

            cerr<< "INDEX ALREADY DOESN'T EXIST";

        } else if(table[i]->next == NULL && table[i]->key == key){
            table[i] == NULL
        } else {
            Node* ptr = table[index], delptr;
            
            while (ptr->next != NULL && ptr->next->key != key)
            {
                ptr = ptr->next;
            }
            delptr = ptr->next;
            ptr->next = delptr->next;
            delete delptr;
        }


    }




    template <typename Tkey, typename Tvalue>
    Tvalue Hmap<Tkey, Tvalue>::search(const Tkey &key, bool& found){

        Tvalue val = NULL;
        index = hash(key);
        if(table[index]->next == NULL){
            if(table[index]->key == key){
                found = true;
                val = table[index]->value;
                return val;
            }else{
                found = false;
                return val;
            }
        }else{
            Node::Hmap::Node* ptr = table[index];
            
            while (ptr != NULL)
            {
                if(ptr->key == key){
                    found = true;
                    val = ptr->value;
                    return val;
                }else{
                    ptr = ptr->next;
                }
                
            }
            found = false;
            return val;
            
            
        }


    }

    //CHECK DE WARAYA DAROORYY
    template <typename Tkey, typename Tvalue>
    void Hmap<Tkey, Tvalue>::display(){
        
        if(isEmpty())
            cerr << "EMPTY TABLE";
        else{
             for(int i=0; i<TableSize; i++){
            
                if(table[i]!=NULL){
                    if(table[i]->next !=NULL ){
                        Node* ptr = table[i];
                        while(ptr!=NULL)
                        cout << ptr->value << endl;
                        ptr = ptr->next;
                    }else{
                        cout << table[i]->value;
                    }
                }
            }

        }
    }


    template <typename Tkey, typename Tvalue>
    bool Hmap<Tkey, Tvalue>::isEmpty(){
        
        for (int i=0; i<TableSize; i++){
            if(table[i] != NULL) return false;
        }
        return true;
    }