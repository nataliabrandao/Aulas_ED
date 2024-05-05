#include <iostream> 

using std:: endl; 
using std:: cin; 
using std:: cout; 
using std:: string; 

// aula 27/03/24 parte -1

int main() 
{
    int* ptrInt = 0; 

    cout << "valor de ptrInt : " << ptrInt << endl; 
    cout << "endereço de ptrInt : " << &ptrInt << endl; 


    int iNumMagico = 42; 
    cout << "endereço de iNumMagico : " << &iNumMagico << endl; 

    ptrInt = &iNumMagico; 
    cout << "valor de ptrInt : " << ptrInt << endl; 
    cout << "endereço de ptrInt : " << &ptrInt << endl; 

    int iNumSagrado = 7;
    cout << "Endereço de iNumSagrado " << &iNumSagrado << endl; 

    ptrInt = &iNumSagrado ; 
    cout << "valor de ptrInt : " << ptrInt << endl; 
    cout << "endereço de ptrInt : " << &ptrInt << endl; 

    return 0; 
}