#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int DIA_EM_SEGUNDOS = 86400;
    int SEGUNDOS_EM_UMA_HORA = 3600;
    int SEGUNDOS_EM_UM_MINUTO = 60;

    cout << "Entre com o número de segundos: ";
    int numSegundos;
    cin >> numSegundos;
    cout << numSegundos << " segundos = " << numSegundos / DIA_EM_SEGUNDOS << " dias, ";
    cout << (numSegundos % DIA_EM_SEGUNDOS) / SEGUNDOS_EM_UMA_HORA << " horas, ";
    cout << ((numSegundos % DIA_EM_SEGUNDOS) % SEGUNDOS_EM_UMA_HORA) / SEGUNDOS_EM_UM_MINUTO << " minutos e ";
    cout << ((numSegundos % DIA_EM_SEGUNDOS) % SEGUNDOS_EM_UMA_HORA) % SEGUNDOS_EM_UM_MINUTO << " segundos\n";
    
    return 0;
}