#include <iostream>
using namespace std;

int main()
{
    
    cout << "========== CALCULO DE IMPOSTO ==========" << endl;
    double renda = 0;
    while (renda >= 0)
    {
        
        cout << "Digite a sua renda (numeros negativos finalizam o programa): ";
        cin >> renda;
        if (renda <= 5000){            
            cout << "========== IMPOSTO ==========" << endl;
            cout << "Imposto a pagar: " << 5000 * 0 << endl;
            cout << "=============================" << endl;
        }
        else if (renda > 5000 && renda <= 10000){
            cout << "========== IMPOSTO ==========" << endl;
            cout << "Imposto a pagar: " << 5000 * 0 + 10000 * 0.10 << endl;
            cout << "=============================" << endl;
        }
        else if (renda > 10000 && renda <= 20000){
            cout << "========== IMPOSTO ==========" << endl;
            cout << "Imposto a pagar: " << 5000 * 0 + 10000 * 0.10 + 20000 * 0.15 << endl;
            cout << "=============================" << endl;
        }
        else if (renda > 20000){
            cout << "========== IMPOSTO ==========" << endl;
            cout << "Imposto a pagar: " << 5000 * 0 + 10000 * 0.10 + 20000 * 0.15 + 3000 * 0.20 << endl;
            cout << "=============================" << endl;
        }        
    }
    
    return 0;
}
    
