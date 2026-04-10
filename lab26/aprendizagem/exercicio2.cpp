#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

#define gray "\033[90m"

#define green "\033[32m"
#define red "\033[31m"
#define default "\033[m"

bool corrigeNome(char nome[]){
        
    bool editado = false;
    char nomeSemEdicao[255];
    
    if(!strcmp(nome, "fim"))
        return editado;
    
    strcpy(nomeSemEdicao, nome);

    if (islower(nome[0]))
        nome[0] = toupper(nome[0]);
    

    for (int i = 1; nome[i]; i++){
        
        if (isupper(nome[i]))
            nome[i] = tolower(nome[i]);
        
        
        if (nome[i-1] == ' ' && nome[i+2] != ' ')
            nome[i] = toupper(nome[i]);
                                   
    }
        
    if(!strcmp(nome, nomeSemEdicao))
        editado = false;        
    else 
        editado = true;

    return editado;
}

int main()
{
        
    char nome[255];
    bool editado = false;
    
    cout << "Entre com os nomes dos aprovados (fim para encerrar): " << endl;
    do{        
        
        cin.getline(nome, 255);
        editado = corrigeNome(nome);
        
        if(strcmp(nome, "fim")){
            if(editado)       
                cout << gray << left << setw(30) << nome << red << " <-- Corrigido" << default << endl;
            else
                cout << default << left << setw(30) << nome << green << " <-- OK" << default << endl;            
        }
        
    }while (strcmp(nome, "fim"));
        
    
    return 0;
}
