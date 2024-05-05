#include <iostream> 

// AULA 20/03/24 PARTE 2

using std:: cout; 
using std:: cin; 
using std:: endl; 
using std:: string; 

typedef struct Livro
{
    string strTitulo; 
    string strAutor; 
    int iPublicacao; 
} Livro; 

typedef struct Biblio 
{
    string strNome; 
    int itamAcervo; 
    struct Livro livros[1000];

} Biblio;

void listarLivros(struct Biblio); 
void adicionarLivros(struct Biblio&, struct Livro );

int main()
{ 
    struct Biblio biblio;
    biblio.strNome = "Biblioteca 1"; 
    biblio.itamAcervo = 0;

    struct Livro livro1; 
    livro1.strTitulo  = "Sonhar";
    livro1.strAutor = "Maria";
    livro1.iPublicacao = 2009;

    struct Livro livro2;
    livro2.strTitulo = "cabana";
    livro2.strAutor = "julia";
    livro2.iPublicacao = 2005;

    struct Livro livro3;
    livro3.strTitulo = "1984";
    livro3.strAutor = "katia";
    livro3.iPublicacao = 1949;

    adicionarLivros(biblio, livro1);
    listarLivros(biblio);

    adicionarLivros(biblio, livro2); 
    listarLivros(biblio);

    adicionarLivros(biblio, livro3); 
    listarLivros(biblio);

    return 0; 
}

void listarLivros (struct Biblio biblio)
{
    cout << "Livros da : " << biblio.strNome << endl; 

    for ( int i = 0; i < biblio.itamAcervo; i++)
    {
        cout << "titulo: " << biblio.livros[i].strTitulo << " , por : " << biblio.livros[i].strAutor << endl; 
        cout << "publicado em : " << biblio.livros[i].iPublicacao << endl; 
    }
}


void adicionarLivros (struct Biblio& biblio, struct Livro novoLivro)
{
    biblio.livros[biblio.itamAcervo] = novoLivro; 
    biblio.itamAcervo +=1 ;
}
