#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float angulo = 0;
    cout << "Digite um ângulo: ";
    cin >> angulo;
    angulo = angulo * M_PI / 180.0;
    angulo = sin (angulo);

    cout << "Seno = " << angulo << endl;
return 0;
}