#include<iostream>
using namespace std;

enum SituacaoDisciplina{
    aprovado,
    trancado,
    reprovado,
};

struct Aluno {
    char nome[20];
    int codDisciplina;
    SituacaoDisciplina situacao;
};

void primeiroAluno(Aluno* aluno){
    cout << "Nome: " << aluno->nome << endl;
    cout << "Codigo da disciplica: " << aluno->codDisciplina << endl;
    cout << "Situacao: " << aluno->situacao << endl;
}

int main()
{
    cout << "Digite a quantidade de alunos: ";
    int qtdAlunos;
    cin >> qtdAlunos;

    Aluno* alunos = new Aluno[qtdAlunos];

    for (int i = 0; i < qtdAlunos; i++){
        cout << "\nDigite o nome do " << i+1 << " aluno: ";
        cin >> alunos[i].nome;

        cout << "Digite a codigo da diciplina do " << i+1 << " aluno: ";
        cin >> alunos[i].codDisciplina;

        cout << "Digite a situacao do " << i+1 << " aluno (0)aprovado (1)trancado (2)reprovado: ";        
        int result;
        cin >> result;

        if(result == 0){
            alunos[i].situacao = aprovado;
        }
        else if(result == 1){
            alunos[i].situacao = trancado;
        }
        else if(result == 2){
            alunos[i].situacao = reprovado;
        }
    }

    cout << "\n=============== ALUNOS ==============="<< endl;
    for (int i = 0; i < qtdAlunos; i++){
        cout << "Nome: " << alunos[i].nome << endl;
        cout << "Codigo da disciplica: " << alunos[i].codDisciplina << endl;
        cout << "Situacao: " << alunos[i].situacao << endl;
        cout << "=============================="<< endl;
    }
 
    Aluno* pAluno = &alunos[0];
    delete alunos;
    cout << "\n================ O primeiro aluno ================\n";
    primeiroAluno(pAluno);
}