#include <iostream>
#include <cmath> 


// AULA 13/03

using std:: cout; 
using std:: endl; 
using std:: string; 
using std:: cin; 

void frasepreferida()
{
    cout << "eu adormo a emap " << endl; 
}

void montafrase( char chaArtigo, string strPalavra)
{
    cout << "Eu adoro " << chaArtigo << " " << strPalavra << endl; 
}

void montafrasepadrao( char chArtigo = 'a', string strPalavra = "emap")
{
    cout << "eu adoro "  << chArtigo << " " << strPalavra << endl; 
}

int potenciacao ( int iBase, int iExpoente)
{
    return pow(iBase, iExpoente); 
}

float modulo( float fValor)
{
    return fabs(fValor); 
}

void minhaFuncao( int arriNumeros[], int iTamanhoVetor )
{
    for( int i = 0; i < iTamanhoVetor; i++)
    {
        cout << arriNumeros[i] << endl; 
    }
}

int soma( int iValor1, int iValor2) 
    {
        return iValor1 + iValor2; 
    }

int soma( int iValor1, int iValor2, int iValor3)
    {
        return iValor1 + iValor2 + iValor3; 
    }

int main()
{
    frasepreferida(); 

    montafrase( 'a', "emap"); 

    montafrasepadrao();

    montafrasepadrao( 'a'); 

    montafrasepadrao( 'o', "yuri"); 

    cout << "potenciacao(2,10) : " << potenciacao(2, 10) << endl; 

    cout << "modulo(-3.5) : " << modulo(-3.5) << endl; 
    cout << "modulo(-3) : " << modulo(-3) << endl; 

    int arriVetorTeste[4] = {1, 2, 3, 4}; 
    int iTamanhoVetor = sizeof(arriVetorTeste)/ sizeof(arriVetorTeste[0]); 
    cout << iTamanhoVetor << endl; 

    minhaFuncao(arriVetorTeste, iTamanhoVetor ); 

    int iNum1 = 3; 
    int iNum2 = 2; 
    int iNum3 = 4; 

    cout << " soma de iNum1 e iNum2 : " << soma(iNum1, iNum2) << endl;
    cout << " soma de iNum1 e iNum2 e iNum3 : " << soma(iNum1, iNum2, iNum3) << endl;

    return 0; 
}