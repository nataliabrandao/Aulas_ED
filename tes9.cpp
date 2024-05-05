#include <iostream> 


//05/04/24

using std:: cin; 
using std:: cout; 
using std:: string; 
using std:: endl;

typedef struct Node 
{
    int iData ;
    Node* ptrNext; 
}Node;


typedef struct LinkedList 
{
    Node* ptrFirst; 
}LinkedList;


LinkedList* newlinkedlist ()
{
    LinkedList* temp = (LinkedList*)malloc(sizeof(LinkedList));
    temp -> ptrFirst = nullptr; 

    return temp; 
}

Node* newNode ( int iValue)
{
    Node* temp = (Node*)malloc(sizeof(Node)); 
    temp -> iData = iValue ; 
    temp -> ptrNext = nullptr; 

    return temp; 
}

void showFirstElement(LinkedList* const linkedlist)
{
    if (linkedlist == nullptr || linkedlist -> ptrFirst == nullptr)
    {
        cout << "howFirstElement LIsta vazia " << endl; 
    }
    else 
    {
        cout << "primeiro da lista é : " << linkedlist -> ptrFirst->iData << endl; 
    }
}

void showLastElement (LinkedList* const linkedlist)
{
    if (linkedlist == nullptr || linkedlist -> ptrFirst == nullptr)
    {
        cout << "showlastelemnt lista vazia " << endl;
    }
    else 
    {
        Node* lastNode = linkedlist -> ptrFirst; 
        while (lastNode -> ptrNext != nullptr)
        {
            lastNode = lastNode -> ptrNext; 
        }
        cout << "ultimo da lista " << lastNode ->  iData << endl; 
    }
}

void showElements (LinkedList* const linkedlist)
{
    if (linkedlist == nullptr || linkedlist -> ptrFirst == nullptr)
    {
        cout << " showelemnts lista vazia " << endl; 
    }
    else
    {
        Node* current = linkedlist -> ptrFirst; 
        cout << " elemntos da lista : "; 
        while (current != nullptr)
        {
            cout << " " << current -> iData; 
            current = current -> ptrNext; 

        }
        cout << endl; 

    }
}

 void addElement (LinkedList* const linkedlist, int iValue)
 {
    Node* temp = newNode(iValue); 

    if (linkedlist -> ptrFirst == nullptr )
    { 
        linkedlist -> ptrFirst = temp; 

        return; 
    }
    else 
    {
        Node* lastNode = linkedlist -> ptrFirst; 

        while( lastNode -> ptrNext != nullptr)
        {
            lastNode = lastNode -> ptrNext; 
        }

        lastNode -> ptrNext = temp; 
    }
 }


 void removeElement (LinkedList* const linkedlist, int iValue)
{

    if (linkedlist == nullptr || linkedlist -> ptrFirst == nullptr)
    {
        cout << " removeElemnt lista vazia " << endl; 
        return; 
    }

    Node* current = linkedlist -> ptrFirst; 
    Node* previous = nullptr; 

    if ( current -> iData == iValue)
    {
        linkedlist -> ptrFirst = linkedlist -> ptrFirst -> ptrNext; 
        free (current); 
        return; 
    }

    while ( linkedlist -> ptrFirst != nullptr && current -> iData != iValue)
    {
        previous = current; 
        current = current -> ptrNext;
    }

    if (current == nullptr) return;

    previous -> ptrNext = current -> ptrNext; 

    free(current); 

}


int main()
{
    LinkedList* linkedlist = newlinkedlist();
    showFirstElement(linkedlist); 
    showLastElement(linkedlist);
    showElements(linkedlist);
    removeElement(linkedlist, 666); 

    cout << " ======================================" << endl; 

    addElement(linkedlist, 0); 
    showFirstElement(linkedlist); 
    showLastElement(linkedlist);
    showElements(linkedlist);


    cout << " ======================================" << endl; 


    addElement(linkedlist, 3); 
    showFirstElement(linkedlist); 
    showLastElement(linkedlist);
    showElements(linkedlist);
    removeElement(linkedlist, 0); 
    removeElement(linkedlist, 3); 


    return 0; 

}