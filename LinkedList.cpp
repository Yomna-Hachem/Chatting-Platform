#include "LinkedList.hpp"

//-- Definition of the class constructor
template<typename listdata>
LinkedList<listdata>::LinkedList() : first(0), mySize(0) {}

template<typename listdata>
LinkedList<listdata>::LinkedList(const LinkedList<listdata>& origList) : first(0), mySize(origList.mySize) {
    if (mySize == 0) return;
    LinkedList::NodePointer origPtr, lastPtr;
    first = new Node(origList.first->data);  // copy first node
    lastPtr = first;
    origPtr = origList.first->next;
    while (origPtr != 0)
    {
        lastPtr->next = new Node(origPtr->data);
        origPtr = origPtr->next;
        lastPtr = lastPtr->next;
    }
}

//-- Definition of the destructor
template<typename listdata>
inline LinkedList<listdata>::~LinkedList() {
    LinkedList::NodePointer prev = first, ptr;
    while (prev != 0)
    {
        ptr = prev->next;
        delete prev;
        prev = ptr;
    }
}

// Definition of empty()
template<typename listdata>
bool LinkedList<listdata>::empty() {
    return mySize == 0;
}



//-- Definition of insert()
template<typename listdata>
void LinkedList<listdata>::insert(listdata& dataVal) {
    
    mySize++;
    LinkedList<listdata>::NodePointer newPtr = new Node(dataVal), ptr = first;
    
        
    
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = newPtr;
    
}

//-- Definition of erase()
template<typename listdata>
void LinkedList<listdata>::erase(int index) {
    if (index < 0 || index >= mySize)
    {
        cerr << "Illegal location to delete -- " << index << endl;
        return;
    }
    mySize--;
    LinkedList<listdata>::NodePointer ptr,
        predPtr = first;
    if (index == 0)
    {
        ptr = first;
        first = ptr->next;
        delete ptr;
    } else {
        for (int i = 1; i < index; i++)
            predPtr = predPtr->next;
        ptr = predPtr->next;
        predPtr->next = ptr->next;
        delete ptr;
    }
}

//-- Definition of search()
template<typename listdata>
int LinkedList<listdata>::search(listdata dataVal) {
    int loc;
    LinkedList::NodePointer tempP = first;
    for (loc = 0; loc < mySize; loc++)
        if (tempP->data == dataVal)
            return loc;
        else
            tempP = tempP->next;
    return -1;
}

//-- Definition of display()
template<typename listdata>
void LinkedList<listdata>::display(ostream& out) const {
    LinkedList::NodePointer ptr = first;
    while (ptr != 0)
    {
        out << ptr->data << "  ";
        ptr = ptr->next;
    }
}






