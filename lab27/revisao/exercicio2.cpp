#include <iostream>
using namespace std;
// construa a função ExibirErro
void ExibirErro(const int codigo, const char descricao[], void (*funcao)(const int codigo, const char descricao[])){
    funcao(codigo, descricao);
}

// construa a função usuario
void usuario(const int codigo, const char descricao[]){
    cout << "A operacao nao pode ser concluida!" << endl << endl;
    cout << "Algum problema foi detectado no sistema que impossibilitou a" << endl;
    cout << "conclusao da tarefa. Contacte o desenvolvedor do sistema em" << endl;
    cout << "dev@sys.com e envie o relatorio de erros abaixo." << endl << endl;
    cout << "-----------------------------" << endl;
    cout << "Relatorio de Erros do Sistema" << endl;
    cout << "-----------------------------" << endl;
    cout << "Codigo: " << codigo << endl;
    cout << "Descricao: " << descricao << endl;
}

// construa a função programador
void programador(const int codigo, const char descricao[]){
    cout << "Erro: " <<  codigo << ": " << descricao << '!' << endl;
}


int main()
{
    cout << "----------------------- Usuario -----------------------" << endl;
    ExibirErro(1245, "falha na leitura do arquivo", usuario);
    cout << "\n--------------------- Programador ---------------------\n";
    ExibirErro(4521, "erro inesperado na inicializacao", programador);
    return 0;
}