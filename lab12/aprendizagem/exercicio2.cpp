#include<iostream>
#include"exercicio3.h"
using namespace std;

main(){
    

    cout << "Estre com tres palavras, a mesma em portugues, ingles e espanhol: ";
    Palavras traducao;
    cin >> traducao.portugues >> traducao.ingles >> traducao.espanhol;
    dicionario[2] = traducao;
    
    exibirPalavras();
}