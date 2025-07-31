#include <iostream>
using namespace std;

int main()
{

    cout << "Digite dois numeros inteiros: ";
    int x, y;
    cin >> x >> y;
    
    cout << endl << "O quociente de " << x << "/" << y << " e " << x / y << endl;    
    cout << "O resto da divisao " << x << "%" << y << " e " << x % y << endl;

    return 0;
}
