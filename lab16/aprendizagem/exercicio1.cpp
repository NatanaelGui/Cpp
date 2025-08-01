#include <iostream>
using namespace std;

void exibeTime(char jogador[], char *pJogador);
int main()
{
    char jogador[50];
    char *pJogador = jogador;    
    cout << "Digite o jogador/time: ";
    cin >> jogador;
   
    int qtdLetras = 0;
    for(int i=0; i<jogador[i]; i++){
       if(jogador[i] == '/'){            
           pJogador = &jogador[i+1];
           qtdLetras = i;
           break;            
       }
    }

    cout << "O nome do jogador tem " << qtdLetras << " letras." << endl;
    cout << "O seu time é o ";
    exibeTime(jogador, pJogador);

    return 0;
}
void exibeTime(char jogador[], char *pJogador){
    
    for (int i = 0; i < jogador[i]; i++){
        cout << pJogador[i];
    }
}