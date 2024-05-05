#include <iostream> 

// AULA 04/03

using std:: cout; 
using std:: endl; 
using namespace std; 

int main() 
{
    int iNum1 = 3; 
    int iNum2 = 4; 
    int iNum3 = 5; 

    cout << "iNum1 : " << iNum1 << "\n Tem tamanho: " << sizeof(iNum1) << endl; 
    cout << "iNum2 : " << iNum2 << "\n Tem tamanho: " << sizeof(iNum2) << endl; 
    cout << "iNum3 : " << iNum3 << "\n Tem tamanho: " << sizeof(iNum3) << endl; 

    short sNum1 = 2; 
    short sNum2 = 9; 
    short sNum3 = 7;

    cout << "sNum1 : " << sNum1 << "\n Tem tamanho: " << sizeof(sNum1) << endl; 
    cout << "sNum2 : " << sNum2 << "\n Tem tamanho: " << sizeof(sNum2) << endl; 
    cout << "sNum3 : " << sNum3 << "\n Tem tamanho: " << sizeof(sNum3) << endl; 


    long lNum1 = 6; 
    long lNum2 = 15; 
    long lNum3 = 7; 

    cout << "lNum1 : " << lNum1 << "\n Tem tamanho: " << sizeof(lNum1) << endl; 
    cout << "lNum2 : " << lNum2 << "\n Tem tamanho: " << sizeof(lNum2) << endl; 
    cout << "lNum3 : " << lNum3 << "\n Tem tamanho: " << sizeof(lNum3) << endl; 

    
    long long llNum1 = 5; 
    long long llNum2 = 4; 
    long long llNum3 = 2; 

    cout << "llNum1 : " << llNum1 << "\n Tem tamanho: " << sizeof(llNum1) << endl; 
    cout << "llNum2 : " << llNum2 << "\n Tem tamanho: " << sizeof(llNum2) << endl; 
    cout << "llNum3 : " << llNum3 << "\n Tem tamanho: " << sizeof(llNum3) << endl; 

    float fNum1 = 0.99; 
    double dNum2 = 0.8; 
    long double ldNum3 = 0.3; 

    cout << "fNum1 : " << fNum1 << "\n Tem tamanho: " << sizeof(fNum1) << endl; 
    cout << "dNum2 : " << dNum2 << "\n Tem tamanho: " << sizeof(dNum2) << endl; 
    cout << " ldNum3: " << ldNum3 << "\n Tem tamanho: " << sizeof(ldNum3) << endl; 

    char cValue = 'E'; 
    cout << "cValue : " << cValue << "\n Tem tamanho: " << sizeof(cValue) << endl; 
    // converte explicitamente o valor de cValue em um inteiro antes de imprimir
    // para retornar o tamanho do valor convertido em inteiro
    cout << " (int)cValue : " << int(cValue) << "\n Tamanho: " << sizeof(int(cValue)) << endl;

    char cPalavra1 = 77; 
    char cPalavra2 = 0x41; 
    char cPalavra3 = 0b1110000; 

    cout << cValue; 
    cout << cPalavra1;
    cout << cPalavra2; 
    cout << cPalavra3 << endl; 

    cout << endl; 

    string strValue1 = "EU adoro a "; 
    string strValue2 = "Emap "; 

    cout << "strValue1 : " << strValue1 << "\n Tem tamanho: " << sizeof(strValue1) << endl; 
    cout << "strValue2 : " << strValue2 << "\n TEm tamanho: " << sizeof(strValue2) << endl; 

    cout << strValue1 << " " << strValue2 << endl; 

    cout << endl; 

    // quando é boleano independente se é "true" ou "numero" seu tamanho sempre é 1. 
    // mas boleano "true" ou com "numero" diferente de zero seu valor é 1. 
    // mas boleano "false" ou com "numero" igual a zero seu valor é 0.

    bool bValue1 = true; 
    bool bValue2 = false; 
    bool bValue3 = 42; 
    bool bValue4 = 0; 
    
    cout << "bValue1 : " << bValue1 << " \n TEm tamanho : " << sizeof(bValue1) << endl; 
    cout << "bValue2 : " << bValue2 << " \n TEm tamanho : " << sizeof(bValue2) << endl; 
    cout << "bValue3 : " << bValue3 << " \n TEm tamanho : " << sizeof(bValue3) << endl; 
    cout << "bValue4 : " << bValue4 << " \n TEm tamanho : " << sizeof(bValue4) << endl; 
    

    // Em C++, é uma prática comum usar letras maiúsculas para nomes de constantes
    const int iNUMERO = 111; 
    cout << "iNUMERO : " << iNUMERO << "\n TEm tamanho : " << sizeof(iNUMERO) << endl; 

    cout << endl; 

    //unsigned short é um tipo de dado inteiro sem sinal (ou seja, que não pode representar números negativos)
    // que é tipicamente armazenado em 2 bytes de memória.
    unsigned short usNum = 42000; 
    cout << "usNum : " << usNum << "\nTamanho de usNum : " << sizeof(usNum) << endl;

    unsigned long long int ulliNum = 42; 
    cout << " ulliNum " << ulliNum << "\n Tamanho de ulliNum : " << sizeof(ulliNum) << endl;

    int iValor = 42; 
    int iValorLido = 0; 
    int iResultado = 0; 

    cin >> iValorLido; 
    cout << "iValorLido : " << iValorLido << endl; 

    iResultado = (iValorLido < iValor) ? 0 : 1; 
    cout << "RESultado : " << iResultado << endl; 

    int iDia = 10; 

    switch (iDia)
    {
        case 8: 
            cout << "Segunda-Feira" << endl; 
            break;
        case 2: 
            cout << "Terça-Feira" << endl; 
            break;
        case 3: 
            cout << "Quarta-Feira" << endl; 
            break; 
        case 4: 
            cout << "Quinta-Feira" << endl; 
            break;
        default: 
            cout << "DIA LOUCO" << endl; 
    }
    

    return 0; 
}