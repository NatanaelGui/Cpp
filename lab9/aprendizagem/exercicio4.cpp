#include <iostream>
using namespace std;

int main()
{
    const int KM = 1000;

    cout << "Entre com a distância em metros: ";
    int metros;
    cin >> metros;    
    cout << metros << " metros equivalem a " << metros / KM << " quilômetros e "<< metros % KM << " metros. " << endl;
    return 0;
}
