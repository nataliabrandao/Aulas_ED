#include <iostream> 

// AULA 11/03

using std:: cout; 
using std:: cin; 
using std:: endl; 
using std:: string; 

int main()
{
    int iContador = 1; 
    while (iContador <= 5)
    {
        cout << iContador << "\n"; 
        iContador++; 
    }

    iContador = 42;
    do 
    {
        cout << iContador << "\n"; 
        iContador++; 
    } 
    while (iContador <= 5); 
     

    for(int i = 1; i < 3; i++)
    {
        for(int j = 1; j < 3; j++)
        {
            for(int k = 1; k < 3; k++)
            {
                cout << "(" << i << "," << j << "," << k << ") " << ")" << "\n"; 
            }
        }
    }
    
    int x[100] = {0, 1}; 

    cout << "x[0] = " << x[0] << ", tem endereço : " << &x[0] << endl; 
    cout << "x[1] = " << x[1] << ", tem endereço : " << &x[1] << endl; 
    cout << "x[2] = " << x[2] << ", tem endereço : " << &x[2] << endl; 
    cout << "x[99] = " << x[99] << ", tem endereço : " << &x[99] << endl; 
    cout << "x[100] tem tamanho de: " << sizeof(x)/ sizeof(x[0]) << endl; // tamanho do array x


    int array[4]; 
    array[0] = 2;
    array[1] = 4;
    array[2] = 8;
    array[3] = 16; 
    array[4] = 32; 


    cout << "array[0] : "<<array[0]  <<", tem endereço : " << &array[0] << endl; 
    cout << "array[1] : "<<array[1]  <<", tem endereço : " << &array[1] << endl; 
    cout << "array[2] : "<<array[2]  <<", tem endereço : " << &array[2] << endl; 
    cout << "array[3] : "<<array[3]  <<", tem endereço : " << &array[3] << endl; 
    cout << "array[4] : "<<array[4]  <<", tem endereço : " << &array[4] << endl; 

    cout<< "======="<< endl;

    cout << "o tamanho do array[4] : " << sizeof(array)/sizeof(array[4]) << endl; 

    return 0; 
}