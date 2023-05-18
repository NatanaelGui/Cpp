#include <iostream>
#include <cstdlib>
#include <ctime>


int inicializar(int numero);
void ligar();
void verificar();
void ativar();
using namespace std;
int main()
{
    int inicializacao = 0;
    srand(time(NULL));
    inicializacao = inicializar(inicializacao);
    if(inicializacao > 1073741823){
        cout << "Sistema em funcionamento " << endl;
    }
    else {
        cout << "Falha na inicialização" << endl;
    }
    return 0;
}
int inicializar(int numero){
    cout << "Inicializando Sistema:" << endl;
    ligar();
    verificar();
    ativar();
    cout << "inicialização concluída.\n" << endl;
    int resultado = rand();
    return resultado;
}
void ligar(){
    cout << "- Ligando dispositivos" << endl;
}
void verificar(){
    cout << "- Verificando integridade" << endl;
}
void ativar(){
    cout << "- Ativando processos" << endl;
}
