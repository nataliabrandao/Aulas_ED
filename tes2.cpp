#include <iostream> 
#include <cmath> 

//Aula 08/03

using std:: cout; 
using std:: cin; 
using std:: endl; 
using std:: string; 

int soma (int iValor1, int iValor2);
int soma(int iValor1, int iValor2, int iValor3);

int main()
{
    int iNum1 = 10; 
    int iNum2 = 2; 
    int iNum3 = 4; 

    cout << soma(iNum1, iNum2) << endl; 
    cout << soma(iNum1, iNum2, iNum3) << endl; 

    return 0; 
}

int soma (int iValor1, int iValor2)
    {
        return iValor1 + iValor2; 
    }

int soma(int iValor1, int iValor2, int iValor3)
    {
       return iValor1 + iValor2 + iValor3;
    }