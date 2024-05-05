#include <iostream> 

using std:: cin ; 
using std:: cout; 
using std:: endl; 
using std:: string; 


//AULA 20/ 03 PARTE 1

 //struct é uma estrutura de dados que permite agrupar diferentes tipos de dados sob um único nome. 
 //É uma maneira de definir um novo tipo de dados personalizado. As estruturas podem conter variáveis, 
 //tipos de dados primitivos, outras estruturas e até mesmo funções.

int main()
{
    struct  les
    {
        string strNome; 
        int iIdade; 
    } alunoEmap;

    alunoEmap.strNome = "Maria"; 
    alunoEmap.iIdade = 18; 

    cout << "Aluno se chama: " << alunoEmap.strNome << endl; 
    cout << "Idade do indivíduo : " << alunoEmap.iIdade << endl; 

    struct lin 
    {
        string strNome;
        int iIdade; 
    } alunoEmap1, alunoEmap2; 

    alunoEmap1.strNome = "Henzo";
    alunoEmap1.iIdade = 17; 

    alunoEmap2.strNome = "Katua";
    alunoEmap2.iIdade = 19; 

    cout << "Aluno1 nome : " << alunoEmap1.strNome << endl; 
    cout << "Idade do Aluno1 : " << alunoEmap1.iIdade << endl;  

    cout << "Aluno1 nome :  " << alunoEmap2.strNome << endl; 
    cout << "Idade do Aluno2 : " << alunoEmap2.iIdade << endl; 

    return 0; 
}



