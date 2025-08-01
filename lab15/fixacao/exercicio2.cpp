#include<iostream>
using namespace std;

struct Balao
{
 float diametro; // diâmetro em metros
 char marca[20]; // nome da marca
 int modelo; // número do modelo
};

int main()
{
    cout << "Qauantidade de baloes: ";
    int tamanho = 0; cin >> tamanho;
    Balao *balao = new Balao[tamanho];

    cout << "Entre com o Diametro em Metros: ";
    cin >> balao[0].diametro;

    cout << "Entre com o Nome da Marca: ";
    cin >> balao[0].marca;

    cout << "Entre com o Numero do Modelo: ";
    cin >> balao[0].modelo;

    cout << "=======================\n";
    cout << "Diametro em Metros: ";
    cout << balao[0].diametro << endl;

    cout << "Nome da Marca: ";
    cout << balao[0].marca << endl;

    cout << "Numero do Modelo: ";
    cout << balao[0].modelo << endl;
    cout << "=======================\n";

    delete[] balao;
}
