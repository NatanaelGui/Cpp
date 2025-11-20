#include <iostream>
#include <fstream>
using namespace std;

struct Aluno
{
    
    char nome[100];
    char sobreNome[100];
    char turno;
    unsigned serie;    
};

void filtraAlunos(const char* titulo, Aluno alunos[], char turno, unsigned serie){
    
    cout << endl << titulo << endl;
    cout << "-----------------" << endl;
    for(int i = 0; i < 12; i++){
        if(alunos[i].turno == turno && alunos[i].serie == serie){
            
            cout << alunos[i].nome << " " << alunos[i].sobreNome << " " << alunos[i].turno << alunos[i].serie << endl;
        }
    }
}

int main()
{
    
    ifstream fin;
    fin.open("interclasse.txt");
    if(!fin.is_open()){
        cout << "Erro na leitura do arquivo!";
        return EXIT_FAILURE;
    }
    
    Aluno alunos[12];
    for(int i = 0; i < 12; i++){
        fin >> alunos[i].nome;
        fin >> alunos[i].sobreNome;
        fin.get();
        fin.get(alunos[i].turno);
        fin >> alunos[i].serie;
    }
    
    filtraAlunos("Matutino 6a Serie", alunos, 'M', 6);
    filtraAlunos("Matutino 7a Serie", alunos, 'M', 7);
    filtraAlunos("Matutino 8a Serie", alunos, 'M', 8);
    filtraAlunos("Matutino 6a Serie", alunos, 'T', 6);
    filtraAlunos("Matutino 7a Serie", alunos, 'T', 7);
    filtraAlunos("Matutino 8a Serie", alunos, 'T', 8);
    
    fin.close();
    return 0;
}
