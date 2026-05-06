#include <iostream>
#include <cstring>
using namespace std;

struct String
{
    char *str; // ponteiro para a string
    int comp;  // comprimento da string (sem contar '\0')
};
// protótipos para ajustar(), mostrar() e mostrar()

void mostrar(const String &msg, int qtdLoop = 1){

    for (int i = 0; i < qtdLoop; i++)
        cout << msg.str;
}

void mostrar(const char msg[], int qtdLoop = 1){
    
    for (int i = 0; i < qtdLoop; i++)
        cout << msg;
}

void ajustar(String & msg, const char ch[]){
    
    msg.comp =  strlen(ch);
    msg.str = new char[msg.comp + 1];
    strcpy(msg.str, ch);
}

int main()
{
    String msg;
    char teste[] = "Realidade de ponteiros e strings\n";
    ajustar(msg, teste); // primeiro argumento é uma referência
                         // aloca espaço para guardar cópia de teste
                         // ajusta o membro str de msg para apontar
                         // para novo bloco, copia teste para o novo
                         // bloco e ajusta o membro comp

    mostrar(msg);        // mostra o membro String uma vez
    mostrar(msg, 2);     // mostra o membro String duas vezes
    teste[0] = 'D';
    teste[1] = 'u';
    mostrar(teste);    // mostra a string uma vez
    mostrar(teste, 3); // mostra a string três vezes
    mostrar("Pronto!");
    
    delete[] msg.str;
    return 0;
}