#include <iostream>
using namespace std;

struct Par {
    int x;
    int y;
};

void calcular(const int & x, const int & y, Par & par){

    par.x = x + y;
    par.y = x * y;
}

int main()
{
    Par par;
    int num1, num2;
    cout << "Digite um par de valores: ";
    cin >> num1 >> num2;
    calcular(num1, num2, par);
    
    cout << "Soma: " << par.x << endl;
    cout << "Multiplicacao: " << par.y << endl;
    return 0;
}
