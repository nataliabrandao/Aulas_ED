#include <iostream>


//Aula 18 / 03 parte 1

using std:: endl; 
using std:: cout; 
using std:: cin; 
using std:: string; 


void troca(int&, int&);
int& trocaElemento( int, int[]);

int main()
{
    string strNome = "Yuri Saporito"; 
    int iValor = 42; 
    int iValorFuturo = 666; 

    cout << "Valor da string : " << strNome << ", Endereço da string : " << &strNome << endl; 
    cout << "Valor do Inteiro : " << iValor << ", Endereço do inteiro : " << &iValor << endl; 
    cout << "Valor do inteiro futuro : " << iValorFuturo << ", Endereço do inteiro futuro : " << &iValorFuturo << endl; 

    string& strrefNome = strNome; 
    int& irefValor = iValor; 

    cout << "Valor da referência da string : " << strrefNome << ", endereço da  referência da string : " << &strrefNome << endl; 
    cout << "Valor da referência do inteiro : " << irefValor << ", endereço da  referência do inteiro : " << &irefValor << endl; 

    strrefNome = "Camacho"; 
    irefValor = iValorFuturo; 

   cout << "Valor da string : " << strNome << ", Endereço da string : " << &strNome << endl; 
   cout << "Valor do Inteiro : " << iValor << ", Endereço do inteiro : " << &iValor << endl; 
   cout << "Valor da referência da string : " << strrefNome << ", endereço da  referência da string : " << &strrefNome << endl; 
   cout << "Valor da referência do inteiro : " << irefValor  << ", endereço da  referência do inteiro : " << &irefValor << endl; 

   int arriVetor[5] = {1, 99, 3, 7, 5}; 

   for (int i = 0; i<5; i++)
   {
    cout << "Vetor[" << i  << "] = " << arriVetor[i] << endl;
   }

   cout << arriVetor[3] << endl;
   trocaElemento(3, arriVetor) = 111; 
   cout << arriVetor[3] << endl;

   int iNum1 = 7; 
   int iNum2 = 99; 

   cout << "Valor do iNum1: " << iNum1 << ", Endereço do iNum1 : " << &iNum1 << endl; 
   cout << "Valor do iNum2 : " << iNum2 << ", Endereço do iNum2: " << &iNum2 << endl; 

   troca(iNum1, iNum2);
   
   cout << "Valor do iNum1: " << iNum1 << ", Endereço do iNum1 : " << &iNum1 << endl; 
   cout << "Valor do iNum2 : " << iNum2 << ", Endereço do iNum2: " << &iNum2 << endl; 

   int iNum3 = 5;
   cout << "Valor de iNum3 : " << iNum3 << ", endereço de iNum3 : " << &iNum3 << endl; 

   int iNum4 = 10;
   cout << "Valor de iNum4 : " << iNum4 << ", endereço de iNum4 : " << &iNum4 << endl; 

   int& iref = iNum3;  // ref é uma referência para iNum3
   cout << "Valor da referência da iref : " << iref << ", endereço da referência iref : " << &iref << endl; 
    
   iref = iNum4;  // Isto não altera a referência de ref para iNum4
   cout << "Valor da referência da iref : " << iref << ", endereço da referência iref : " << &iref << endl; 
   
   cout << "valor de iNum3 : " << iNum3 << ", endereço de iNum3: " << &iNum3 << endl; 

  
    return 0;
}
    void troca(int& irefValor1, int& irefValor2)
    {
    int iTemp  = irefValor1; 
    irefValor1 = irefValor2;
    irefValor2 = iTemp; 
    }

    int& trocaElemento( int iElemento, int arriVetor[])
    {
        return arriVetor[iElemento];
    }
 


