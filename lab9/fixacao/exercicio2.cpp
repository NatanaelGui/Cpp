#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    cout << "Digite um ponto-flutuante: ";
    double num;
    cin >> num;

    cout << "Notacao padrao: " << num << endl;

    cout << scientific;
    cout << "Notacao cientifica: " << num << endl;

    cout << fixed;
    cout.precision(2);
    cout << "Notacao decimal: " << num << endl;

    return 0;
}