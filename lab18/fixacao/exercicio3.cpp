#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double rendimentoDaiane = 100, rendimentoCelia = 100;
    int anos = 0;
    do{
        
        rendimentoDaiane += 100 * 0.10;
        rendimentoCelia += rendimentoCelia * 0.05;
        ++anos;
    }while(rendimentoCelia < rendimentoDaiane);

    cout << "Se passaram " << anos << " para os saldos atingirem os valores.\n";
    cout << setprecision(2) << fixed;
    cout << "Diane: " << rendimentoDaiane << endl;
    cout << "Celia: " << rendimentoCelia << endl;

    return 0;
}
