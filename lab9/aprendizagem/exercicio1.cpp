#include <iostream>
using namespace std;

int main(){
    
    int a, b, c;

    a = 1 + 2; // 3
    cout << "a: " << a << endl;
    
    b = 1 + a; // 4
    cout << "b: " << b << endl;
    
    c = 1 % 5; // 1
    cout << "c: " << c << endl;

    a = a + 2; // 5
    cout << "a: " << a << endl;

    b = a - c; // 4
    cout << "b: " << b << endl;

    b = 5 * c / 2; // 2
    cout << "b: " << b << endl;

    return 0;
}