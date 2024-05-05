#include <iostream> 

using std:: string; 
using std:: cout; 
using std:: cin; 
using std:: endl; 

//Aula dia 27/03/ 24 parte 2

int square(int*); 
int somaVetor(const int[], const size_t); 


int main()
{
    int iNum1 = 42; // Declara e inicializa uma variável inteira iNum1 com o valor 42.
    int iNum2 = 666; // Declara e inicializa uma variável inteira iNum2 com o valor 666.

    cout << "valor de iNum1: " << iNum1 << endl;
    cout << "endereço de iNum1: " << &iNum1 << endl; 

    cout << "valor de iNum2: " << iNum2 << endl;
    cout << "endereço de iNum2: " << &iNum2 << endl; 

    // Declara um ponteiro constante para um inteiro chamado ptrNum1 e o inicializa com o endereço de iNum1.
    int* const ptrNum1 = &iNum1;

    // Modifica o valor apontado por ptrNum1 para 7. Isso significa que o valor de iNum1 será alterado para 7.
    *ptrNum1 = 7;

    cout << "valor de iNum1: " << iNum1 << endl;
    cout << "endereço de iNum1: " << &iNum1 << endl; 


    // Imprime o valor apontado por ptrNum1, que é 7.
    cout << "Valor apontado por ptrNum1: " << *ptrNum1 << endl;

    // Imprime o endereço para o qual ptrNum1 aponta. Como ptrNum1 aponta para iNum1, isso imprimirá o endereço de iNum1.
    cout << "Endereço apontado por ptrNum1: " << &*ptrNum1 << endl;

    // Imprime o valor armazenado em ptrNum1, que é o endereço de iNum1.
    cout << "Valor de ptrNum1: " << ptrNum1 << endl;

    // Imprime o endereço de memória de ptrNum1.
    cout << "Endereço de ptrNum1: " << &ptrNum1 << endl;
    
    // Ponteiro de um inteiro constante 
    const int* ptrNum2 = &iNum1;
    cout << "valor de ptrNum2 " << ptrNum2 << endl; 
    cout << "imprime o valor apontado de ptrNum2 " << *ptrNum2 << endl; 
    ptrNum2 = &iNum2; 
    cout << "valor de ptrNum2 " << ptrNum2 << endl; 
    cout << "imprime o valor apontado de ptrNum2 " << *ptrNum2 << endl; 

    const int* const ptrNum3 = &iNum1; 
    cout << "valor de ptrNum3 " << ptrNum3 << endl; 
    cout << "o que o ponteiro aponta " << *ptrNum3 << endl; 

    cout << square(&iNum1) << endl; 


    // Declarando um array de inteiros
    int arriValores[] = {1, 2, 3, 4, 5};

    // Calculando a soma dos elementos do vetor usando a função somaVetor
    size_t tamanho = sizeof(arriValores) / sizeof(arriValores[0]); // Calculando o tamanho do vetor
    int resultado = somaVetor(arriValores, tamanho);

    // Imprimindo o resultado
    cout << "A soma dos elementos do vetor é: " << resultado << endl;

    return 0; 


}

int square(int* ptrNum)
{
    return *ptrNum * *ptrNum; 
}

int somaVetor(const int valores[], const size_t tamVetor)
{
    int soma = 0;
    for (size_t i = 0; i < tamVetor; ++i) {
        soma = soma + valores[i];

    }
    return soma;
}

