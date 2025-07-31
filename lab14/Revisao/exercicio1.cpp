#include <iostream>
using namespace std;

int main()
{
    double litros = 3.4;
    double *ptnLitros = &litros;
    cout << "O valor de litros e: " << *ptnLitros;
}
