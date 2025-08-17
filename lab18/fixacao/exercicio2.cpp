#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    int entrada, soma = 0, quantidade = 0;
    cout << "Digite numeros inteiros (0 para finalizar): " << endl;
    do {
        cin >> entrada;
        soma += entrada;
        ++quantidade;
    }while(entrada);
    
    cout << "Foram lidos " << --quantidade << " numeros." << endl;
    cout << "A soma dos numeros eh: " << soma << endl;
    double media = double(soma) / double(quantidade);
    cout << setprecision(5) << "A media eh: " << media;
    
    return 0;
}
