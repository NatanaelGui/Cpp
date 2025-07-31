#include <iostream>
#include <iomanip>
using namespace std;

union jogador
{
 char nome[25]; // nome do jogador
 int numero; // numero da camisa do jogador
};
struct gol
{
 jogador jog; // identificação do jogador
 int hora, min; // hora e minuto em que o gol foi marcado
};

int main()
{
    gol vetGol[3];
    cout << "Digite os dados dos ultimos tres gols: ";
    
    cin >> vetGol[0].jog.nome >> vetGol[0].hora; 
    cin.get();
    cin >> vetGol[0].min;

    cin >> vetGol[1].jog.nome >> vetGol[1].hora; 
    cin.get();
    cin >> vetGol[1].min;

    cin >> vetGol[2].jog.nome >> vetGol[2].hora; 
    cin.get();
    cin >> vetGol[2].min;
cout << "\n============================\n";
    cout << setfill('0');
    cout << "Gol: " << vetGol[0].jog.nome << " ";
    cout << setw(2) << vetGol[0].hora << ':';
    cout << setw(2) << vetGol[0].min << endl;

    cout << "Gol: " << vetGol[1].jog.nome << " ";
    cout << setw(2) << vetGol[1].hora << ':';
    cout << setw(2) << vetGol[1].min << endl;

    cout << "Gol: " << vetGol[2].jog.nome << " ";
    cout << setw(2) << vetGol[2].hora << ':';
    cout << setw(2) << vetGol[2].min << endl;
    cout << "============================\n";
}