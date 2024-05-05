#include <iostream> 

using std:: string; 
using std:: cin; 
using std:: cout; 
using std:: endl;

// 03/04 
// PilHA

typedef struct Node 
{
    int iData; 
    Node* ptrnext; 
} Node; 

typedef struct Stack 
{
    Node* ptrTop; 
}Stack;

Node* newNode(int iValue)
{

    Node* temp = (Node*) malloc(sizeof( Node)); 
    temp-> iData = iValue; 
    temp-> ptrnext = nullptr; 

    return temp;
}


Stack* newStack()
{
    Stack* temp = (Stack*)malloc(sizeof(Stack)); 
    temp -> ptrTop = nullptr; 

    return temp; 

}

void push( Stack* const stack, int iValue)
{
    Node* temp = newNode(iValue); 

    temp -> ptrnext = stack -> ptrTop; 
    stack -> ptrTop = temp; 

}

void pop(Stack* const stack)
{
    if (stack -> ptrTop == nullptr )
    {
        cout << "pilha vazia " << endl; 
        return;
    }

    cout << " elemento removido " << stack -> ptrTop-> iData << endl; 

    Node* temp = stack -> ptrTop; 
    stack -> ptrTop = stack -> ptrTop -> ptrnext; 

    free(temp); 
}


void showTopElements(Stack* const stack )
{
    if (stack -> ptrTop == nullptr)
    {
        cout << "pilha vazia "  << endl; 
        return;
    }
    Node* current = stack -> ptrTop; 

    while ( current != nullptr)
    {
        cout << "elemento " << current -> iData << endl; 
        current = current -> ptrnext; 
    }

}

int main()
{
    Stack* stack = newStack(); 
    showTopElements(stack); 
    pop(stack);
    push(stack, 0);
    showTopElements(stack); 
    cout << "===============================" << endl;
    push(stack, 6);
    push(stack, 0);
    push(stack, 5);
    showTopElements(stack); 
   
    


    return 0; 
}