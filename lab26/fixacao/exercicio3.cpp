#include <iostream>
using namespace std;
const int TAM_NOME = 30;
struct aluno
{
    char nome[TAM_NOME];
    int nivel;
};

int PegarInfo(aluno va[], int n);
void Mostrar1(aluno a);
void Mostrar2(const aluno *pa);
void Mostrar3(const aluno va[], int n);

int main()
{
    cout << "Tamanho da classe: ";
    int tam;
    cin >> tam;

    // remove \n para uso do cin.getline
    cin.ignore();    
    aluno *ptr = new aluno[tam];
    int inscritos = PegarInfo(ptr, tam);
    for (int i = 0; i < inscritos; ++i)
    {
        Mostrar1(ptr[i]);
        Mostrar2(&ptr[i]);
    }
    Mostrar3(ptr, inscritos);
    delete[] ptr;
    cout << "Feito!\n";
    return 0;
}

// solicita e armazena informações de alunos:
// - encerrando ao preencher o vetor ou quando o usuário
// entrar com uma linha em branco para o nome do aluno
// - a função retorna o número de alunos lidos
int PegarInfo(aluno va[], int n){
    
    int i = 0;    
    for(; i < n; i++){
        
        cout << endl << "Nome do " << i+1 << " aluno: ";                
        cin.getline(va[i].nome, TAM_NOME);

        if(!va[i].nome[0])
            return i;        
        
        cout << "Nivel do " << i+1 << " aluno: ";
        cin >> va[i].nivel;
        cin.ignore();
    }
         
    return i;
}

// mostra o conteúdo de um registro aluno
void Mostrar1(aluno a) {
    
    cout << "\n==== Aluno VAL ====\n";
    cout << "Nome do aluno: " << a.nome << endl;
    cout << "Nivel do aluno: " << a.nivel << endl;
}

// mostra o conteúdo do registro aluno apontado
void Mostrar2(const aluno *pa){
    
    cout << "\n==== Aluno REF====\n";
    cout << "Nome do aluno: " << pa->nome;
    cout << endl << "Nivel do aluno: " << pa->nivel << endl;
}

// mostra o conteúdo do vetor de alunos
void Mostrar3(const aluno va[], int n){
    cout << "\n==== Alunos ====\n";    
    for (int i = 0; i < n; i++){
        
        cout << "Nome do " << i+1 << " Aluno: " << va[i].nome;
        cout << endl << "Nivel do " << i+1 << " Aluno: " << va[i].nivel << endl << endl;
    }
}
