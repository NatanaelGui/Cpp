#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float pX, pY, qX, qY, distancia;
    cout << "Ponto P:" << endl;
    cin >> pX >> pY;
    cout << "Ponto Q:" << endl;
    cin >> qX >> qY;

    pX = (qX - pX);
    qY = (qY - pY);

    pX = pow(pX, 2);
    pY = pow(qY, 2);

    distancia = pX + pY;
    distancia = sqrt (distancia);

    cout << "A distância entre P e Q é: " << distancia << endl;    
return 0;
}