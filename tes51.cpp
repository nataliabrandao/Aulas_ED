#include <iostream> 

using std:: cin; 
using std:: cout; 
using std:: string; 
using std:: endl; 

//PART 2 AULA DIA 18/03 
// MATÉRIA DO TESTE 

int main()
{
    enum straming { Appletv, netflix, max, hbo}; 

    straming subs = Appletv;

    switch (subs)
    {
        case Appletv:
            cout << "ebaaa eu nunca useii [" << subs << "] " << endl; 
            break;
        case netflix:
            cout << "eu nunca useii [" << subs << "]" <<  endl; 
            break;
        default:
            cout << " hjjn " << endl;
    }

   enum Meses {JANEIRO, FEVEREIRO, MARCO, ABRIL}; 

   Meses mesPROVAS = MARCO; 
   cout << mesPROVAS << endl; 

   enum Semana { Segunda = 1, Terca , Quarta }; 
   
   Semana diaPalestra = Quarta; 
   cout << diaPalestra << endl; 




    return 0; 
}