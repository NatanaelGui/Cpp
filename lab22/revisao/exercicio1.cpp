#include <iostream>
using namespace std;

int main()
{
    
    cout << "Digite um numero positivo ou negativo: ";
    int num, abs;
    cin >> num;
    
    num < 0 ? abs = -num : abs = num;
    cout << "O valor absoluto de " << num << " eh " << abs;
    return 0;
}
