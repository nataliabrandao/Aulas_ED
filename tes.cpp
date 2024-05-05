#include <iostream> 

// AULAS 26/02 E 28/02 

using std:: cout;
using std:: endl;
using std:: string;
using std:: cin;  

int main()
{
    int iNum = 3; 

    cout << "Valor de Num: " << iNum << endl; 
    cout << "Endereço de Num: " << &iNum << endl; 

    iNum = 4; 

    cout << "Valor de Num: " << iNum << endl; 
    cout << "Endereço de Num: " << &iNum << endl;

    int iVal = 6; 

    if (iVal * iVal < 20)
    {
        cout << "IHulllllll" << endl; 
    }
    else 
    {
        cout << "pse, infelixmente: "<< iVal * iVal << "\n"<< "não é menor que 20 :(" << endl; 
    }

    cout << endl; 

    iVal = 7; 
    if ( iVal < 8 && iVal < 4)
    {
        cout << " ueppaaaa" << endl; 
    }
    else 
    {
    cout << "vixee" << iVal <<  "\n" << "não é menor que 8 e 9 ao mesmo tempo naumm" << endl; 
    }

    cout << endl; 

    iVal = 4; 
    if (!( iVal > 3 || iVal < 5 ))
    {
        cout << "parece que " << iVal << "deu certo" << endl; 
    }
    else 
    {
        cout << "vixee " << iVal << "não deu certo" << endl; 
    }


    cout<<endl;

    iVal = 9;

    if (iVal > 4 && iVal < 8)
    {
        cout << iVal << "\n" << "deu certooo" << endl; 
    }
    else if (iVal < 3)
    {
        cout << iVal << "é menor que 3 " << endl;
    }
    else 
    {
        cout << "bye world" << endl;
    }

    cout<<endl;

    bool querocafe = false; 
    int sera = querocafe  ? 4 : 5; 

    cout << "sera é " << sera << endl; 

    return 0; 
}