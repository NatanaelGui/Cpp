#include <iostream>

using namespace std;
float aumentoQuisePorcento(float n);

int main() {
    float salarioAtual = 0;
    cout << "Salário atual: R$";
    cin >> salarioAtual;

    salarioAtual += aumentoQuisePorcento(salarioAtual);
    cout << "Salário ajustado para R$" << salarioAtual << endl;
    return 0;
}

float aumentoQuisePorcento(float n){
    
    return (n * 15) / 100;
}
