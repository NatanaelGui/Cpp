#include <iostream>
using namespace std;

enum Tipo
{
    JPG, PNG, BMP
};

struct Imagem
{
    char nome[20];
    unsigned altura;
    unsigned largura;
    Tipo tipo;
};

string imgTipo(int n);
void detalhes(Imagem &ptn);
int main()
{
    Imagem img = {
        "backg.png", 1920, 1080, PNG};
    Imagem *ptr = &img;

    detalhes(*ptr);
}

void detalhes(Imagem &ptn)
{
    cout << "A imagem " << ptn.nome << " com o tamanho " << ptn.altura << "x" << ptn.largura
         << " tem formato " << imgTipo(ptn.tipo) << "." << endl;
}
string imgTipo(int n)
{
    switch (n)
    {
    case 0:
        return "JPG";
        break;
    case 1:
        return "PNG";
        break;
    case 2:
        return "BMP";
        break;

    default:
        return "Invalido";
        break;
    }
}