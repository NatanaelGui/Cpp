#include <iostream>
using namespace std;
main(){
    float num, parteFracionaria;
    int parteInteira;

    cout << "Digite um número real: ";
    cin >> num;
    
    parteInteira = int(num);
    parteFracionaria = float(num) - float(parteInteira);

    cout << "A parte inteira: " << parteInteira << '\n';    
    cout << "A parte fracionária: " << parteFracionaria << '\n';
}