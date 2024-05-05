#include <iostream> 

// 01/04
// FILA

using std:: string; 
using std :: cout; 
using std:: cin; 
using std:: endl; 


typedef struct Node
{
    int iData; 
    Node* next; 
}Node; 
//Node* next é um ponteiro para outra estrutura do tipo Node, criando assim uma lista encadeada.

typedef struct Queue 
{
    Node* front; 
    Node* rear; 
} Queue; 
//Ponteiro para o primeiro nó da fila, e rear é um ponteiro para o último nó da fila.

Node* newNode(int iValue) 
{ 
    Node* temp = (Node*) malloc(sizeof(Node)); 
    temp -> iData = iValue; 
    temp -> next = nullptr; 

    return temp; 
}
//temp. Esta variável é usada para referenciar o novo nó que está sendo criado.

Node* natalia = newNode(12345);

Queue* newQueue()
{
    Queue* temp  = (Queue*) malloc(sizeof(Queue)); 
    temp -> front = nullptr; 
    temp -> rear = nullptr; 

    return temp;

}
//a função newQueue aloca dinamicamente memória para uma nova fila, 
//inicializa os ponteiros front e rear como nullptr (indicando que a fila está vazia) e 
//retorna um ponteiro para a nova fila criada. Isso é útil quando queremos criar uma fila
// vazia para posteriormente adicionar elementos a ela.

void enQueue (Queue* const queue, int iValue)
{
    Node* temp = newNode(iValue); 
    if (queue -> rear == nullptr)
    {
        // Se a fila está vazia, o novo nó será o primeiro e o último
        queue->rear = temp; 
        queue->front = temp; 
    }
    else 
    {
        // Caso contrário, a fila já tem elementos
        // O novo nó será adicionado após o último nó atual (apontado por rear)
        queue -> rear -> next = temp; 
        // Atualizamos o ponteiro rear para apontar para o novo último nó
        queue -> rear = temp; 
    }

    return;
}

void deQueue (Queue* const queue)
{

    if (queue -> front == nullptr)
    {
        cout << "fila vazia" << endl; 
        return; 
    }
    Node* temp = queue -> front; 
    queue -> front = queue -> front -> next; 

    if ( queue -> front == nullptr)
    {
        queue -> rear = nullptr; 
    }

    free(temp); 

    return;
}

void showFirstElement(Queue* const queue)
{
    cout << "primeiro elemento " <<  ((queue -> front != NULL) ? (queue -> front) -> iData : -1) << endl; 
}

void showLastElement(Queue* const queue)
{
    cout << "Ultimo elemento " << ((queue -> rear != NULL ) ? (queue -> rear ) -> iData : -1 ) << endl; 
}

void showElements( Queue* const queue)
{
    if (queue -> front == nullptr)
    {
        cout << "fila vazia " << endl; 
        return; 
    }
    // Inicializa um ponteiro current para apontar para o primeiro nó da fila.
    // Isso é necessário para percorrer todos os nós da fila.
    Node* current = queue -> front; 
    while (current != nullptr)
    {
        cout << " o elemnto " << current -> iData << endl; 
        current = current -> next; 
    }

}

int main() 
{
    Queue* queue = newQueue(); 

    enQueue(queue, 0); 
    showFirstElement(queue);
    showLastElement(queue);
    showElements(queue); 

    enQueue(queue, 3); 
    enQueue(queue, 7);
    enQueue(queue, 14);
    enQueue(queue, 49);
    showFirstElement(queue);
    showLastElement(queue);
    showElements(queue); 

    cout << "============================================================" << endl; 
    deQueue(queue); 
    deQueue(queue); 
    showElements(queue); 


    return 0; 
}


    // 1. Estrutura de um nó 
    // 2. EStrutura de uma fila 
    // 3. Função que cria uma fila
    // 4. Função que cria um nó 
    // 5. Função que vai enfileirar um  nó 
    // 6. Função que desinfeleira um nó 
    // 7. Função que exibe o primeiro elemnto 
    // 8. Função que exibe o ultimo elemnto 
    // 9. Função que exibe os elementos