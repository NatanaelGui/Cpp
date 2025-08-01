#include <iostream>
using namespace std;

int tamanhoVetor(char *vetor){
    int i = 0;    
    while(vetor[i] != '\0'){
        i++;
    }
    return i;
}

char* my_strcat(char *origem, const char *destino) {

    char *ptr = origem;
    while(*ptr != '\0' ){
        ++ptr;
    }

    while (*destino != '\n'){
        *ptr = *destino;
        ++ptr;
        ++destino;
    }

    *ptr = '\0';

    return origem;    
}

int main()
{
    const int qtdPalavras = 4;
    const int qtdLetras = 50;
    char matrixPalavras[qtdPalavras][qtdLetras];
    
    cout << "Digite " << qtdPalavras << " Palavras: " << endl;
    for (int i = 0; i < qtdPalavras; i++){
        cin >> matrixPalavras[i];
    }
    
    int qtdMatrix = 0;
    for (int i = 0; i < qtdPalavras; i++){
        qtdMatrix += tamanhoVetor(matrixPalavras[i]);
    }    
    
    char *novoArray = new char[qtdMatrix + qtdPalavras];
    
    for (int i = 0; i < qtdPalavras; i++){
        my_strcat(novoArray, matrixPalavras[i]);
        if (i < qtdPalavras - 1){
            my_strcat(novoArray, " ");
        }        
    }
    cout << "\nConcatenando as palavras obtém-se:" << endl;
    
    cout << novoArray;
    return 0;
}