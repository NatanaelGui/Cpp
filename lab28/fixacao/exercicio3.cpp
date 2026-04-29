#include <iostream>
using namespace std;

struct Caixa
{
    char marca[40];
    float altura;
    float largura;
    float comprimento;
    float volume;
};

float calcVolume(Caixa *caixa){
    
    return caixa->volume = caixa->altura * caixa->largura * caixa->comprimento;
}

void exibi(Caixa *caixa) {
    cout << "----------------------------\n";
    cout << "Marca da Caixa: " << caixa->marca << endl;
    cout << "Altura da Caixa: " << caixa->altura << endl;
    cout << "Largura da Caixa: " << caixa->largura << endl;
    cout << "Comprimento da Caixa: " << caixa->comprimento << endl;
    cout << "Volume da Caixa: " << calcVolume(caixa) << endl;
    cout << "----------------------------\n";
}

int main()
{
    
    Caixa caixa = {"Generico", 0.15f, 0.30f, 0.60f};
    exibi(&caixa);
    return 0;
}