#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector> 
#include <list>
#include <algorithm>
#include <cstring>
#include <iterator>

using namespace std;

const int TableSize=11;
const int DoubleHashVal=7;

template <typename Tkey, typename Tvalue>
class Hmap
{
private:

    class Node{
    public:
        Tkey key;
        Node* next;
        Tvalue value; 
        Node();
        Node(Tkey key, Tvalue value); //SHELT NODE* EL KANT HENA 3SHAN N INITIALIZE B NULL
    };
    
    int numberOfElements;
    Node table[TableSize];

    public:
    Hmap();
    ~Hmap();
    void insert(const Tkey &key , const Tvalue &value);
    int hash(const Tkey &key);
    void erase(const Tkey &key);
    void erase(const Tvalue &value);
    Tvalue search(const Tkey &key, bool& found); //khaleet found hena by reference
    Tvalue get(const Tkey &key); // will use the search function
    void display();
    bool isEmpty();
    






   
};