#include <iostream>
using namespace std;

int main()
{

    cout << "Digite um numero real: ";
    float num;
    cin >> num;
    cout << endl << "A parte inteira: " << int(num) << endl;
    cout << "A parte fracionaria: " << num - int(num) << endl;

    return 0;
}
