#include <iostream>
using namespace std;

struct Livro
{
    char nome[40];
    int ano;
    int qtdImprestimo = 0;
};

struct Jogo
{
    char nome[40];
    int ano;
    int qtdImprestimo = 0;
};

ostream& operator<<(ostream &o, Livro l);
ostream& operator<<(ostream &o, Jogo j);
main()
{
    Livro vetLivros[2] = {
        {"C++ primer Plus", 2011, 0},
        {"Victorine Treinamento em Linguagem C++", 2005, 0}};
    Jogo vetJogos[2] = {
        {"Mario", 1985, 0},
        {"Sonic", 1991, 0},
    };

    cout << "\nVoce quer livros ou um jogos emprestado? Para Jogos digite 0 para Livros digite 1: ";

    unsigned short num;
    cin >> num;
    if (num == 1)
    {
        vetLivros[0].qtdImprestimo += 1;
        vetLivros[1].qtdImprestimo += 1;
    }
    else if (num == 0)
    {
        vetJogos[0].qtdImprestimo += 1;
        vetJogos[1].qtdImprestimo += 1;
    }
    else
    {
        cout << "Numero invalido!";
    }
    
    cout << vetJogos[0];
    cout << vetJogos[1];
    cout << vetLivros[0];
    cout << vetLivros[1];
}

ostream& operator<<(ostream &o, Livro l){
    o << "\nNome: " << l.nome;
    o << "\nAno: " << l.ano;
    o << "\nNumero de emprestimos: " << l.qtdImprestimo;
    o << "\n==================================";    
    return o;
}

ostream& operator<<(ostream &o, Jogo j){
    o << "\nNome: " << j.nome;
    o << "\nAno: " << j.ano;
    o << "\nNumero de emprestimos: " << j.qtdImprestimo;
    o << "\n==================================";
    return o;
}