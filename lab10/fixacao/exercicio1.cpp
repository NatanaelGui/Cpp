#include <iostream>
#include <iomanip>

using namespace std;

main(){
    float precos[3] = {1.50f, 2.00f, 1.00f}, 
    quantidade[3];    
    cout << fixed << setprecision(2);

    cout << "Prezado Cliente," << endl;
    cout << "Digite a quantidade de quilos desejado: " << endl;
    cout << "Alface: ";
    cin >> quantidade[0];

    cout << "Beterraba: ";
    cin >> quantidade[1];

    cout << "Cenoura: ";
    cin >> quantidade[2];
    
    cout << "Resumo da Compra" << endl
    << "------------------------" << endl;    
    cout << "Alface    = " << "R$" <<  quantidade[0] * precos[0] << endl;    
    cout << "Beterraba = " << "R$" << quantidade[1] * precos[1] << endl;    
    cout << "Cenoura   = " << "R$" << quantidade[2] * precos[2] << endl;
    cout << "------------------------" << endl;
    cout << "Total     = R$" << 
        quantidade[0]  * precos[0] + 
        quantidade[1]  * precos[1] + 
        quantidade[2]  * precos[2]
    << endl;
}