#include <iostream>

void exibeHoras(int, int);
using namespace std;
int main(){
    int horas = 0, minutos = 0;
    
    cout << "Entre com o número de horas: ";
    cin >> horas;
    cout << "Entre com o número de minutos: ";
    cin >> minutos;

    exibeHoras(horas, minutos);
    return 0;
}

void exibeHoras(int horas, int minutos){
    std::cout << "Agora são " << horas << ":" << minutos << std::endl;
}