#include<iostream>
using namespace std;

struct Candidato{
 
    char nome[30];
    int notas[3];
};

void ExibeCandidatoArg(Candidato candidato){

    cout << "\n================= Exibe info por argumento =================\n";
    cout << "Nome: " << candidato.nome;    
    cout << "Notas: ";
    for (int i = 0; i < 3; i++)
        cout << candidato.notas[i] << ' ';    
}

void exibeCandidatoEnd(Candidato* candidato){
    
    cout << "\n================= Exibe info por endereco =================\n";
    cout << "Nome: " << candidato->nome;

    cout << "Notas: ";
    for (int i = 0; i < 3; i++)
        cout << candidato->notas[i] << ' ';
    
}

void exibeVetCandidato(Candidato candidato[], const int qtdCandidato){

    cout << "\n================= Exibe vetor de um struct =================\n";
    for (int i = 0; i < qtdCandidato; i++){
    cout << "\n================= Candidato " << i+1 << " =================\n";
        cout << "Nome: " << candidato[i].nome;
        
        cout << "Notas: ";
        for(int j = 0; j < 3; j++)
            cout << candidato[i].notas[j] << ' ';
    }
    
}

void strcpy(const char nome[], char candidatoNome[]){
        
    int i = 0;
    for(; nome[i]; i++)
        candidatoNome[i] = nome[i];        
    
    candidatoNome[i] = '\0';
}


// Existe uma diferença na assinatura das funções usadas para resolver os
// itens “b” e “c”? R: Sim, na "b" se usa "." e na "c" se usa "->".
int main()
{
            
    Candidato candidato, candidato1, candidatos[3];
    
    strcpy("Alberto Santos Dumont\n", candidato.nome);  
    
    strcpy("John Von Neumann\n", candidato1.nome);
    
    candidato.notas[0] = 8;
    candidato.notas[1] = 9;
    candidato.notas[2] = 10;

    candidato1.notas[0] = 10;
    candidato1.notas[1] = 10;
    candidato1.notas[2] = 10;

    candidatos[0] = candidato;
    candidatos[1] = candidato1;

    ExibeCandidatoArg(candidato);    
    exibeCandidatoEnd(&candidato);
    exibeVetCandidato(candidatos, 2);
    
    
    return 0;
}
