#include <iostream>

using namespace std;

float media(float n1, float n2);
float media(float n1, float n2){
    float media = (n1 + n2) / 2;
    return media;
}

int main()
{
    float primeiroNumero = 0, segundoNumero = 0, mediaEntreEles = 0;
    cout << "Digite um valor inteiro: ";
    cin >> primeiroNumero;
    cout << "Digite outro valor inteiro: ";
    cin >> segundoNumero;
    mediaEntreEles = media(primeiroNumero, segundoNumero);

    cout << "A média dos números é " << mediaEntreEles << endl;
return 0;
}