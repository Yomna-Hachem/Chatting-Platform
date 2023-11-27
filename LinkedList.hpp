
#include <iostream>
using namespace std;

template<typename listdata>
class LinkedList {
private:
    class Node {
    public:

        listdata data;
        Node* next; // How does it refer to itself although it isn't created yet?

        Node() : next(0) {}
        Node(listdata dataValue) : data(dataValue), next(0) {}
    };

    typedef Node* NodePointer;
    NodePointer first;
    int mySize;

public:
    LinkedList(); // builds an empty List object; first is 0 and mySize is 0.
    LinkedList(const LinkedList& origList); // Copy constructor.
    ~LinkedList(); // Destructor.
    const LinkedList& operator=(const LinkedList& rightSide); // Assignment operator.
    bool empty(); // Check if this list is empty.
    void insert(listdata &dataVal); // Insert a value into a list at a given index.
    void erase(int index); // Remove a value from a list at a given index.
    int search(listdata dataVal); // Search for an data value in this list.
    void display(ostream& out) const; // Display the contents of this list.
    

};
