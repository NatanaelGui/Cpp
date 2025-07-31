#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    
    char num1[2];
    int num2;    
    cout << "Entre com dois numeros: ";
    cin >> num1[0];
    cin >> num2;    
    cout << "A multiplicacao entre eles eh " <<  atoi(num1) * num2 << ".\n";
    return 0;
}