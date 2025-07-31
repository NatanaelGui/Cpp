#include <iostream>
#include <iomanip>
using namespace std;

struct Chocolate
{
    char marca[20] = "Charge";
    float peso = 2.3;
    int calorias = 350;
};

int main()
{
    cout << setfill('.');

    Chocolate lanche;
    cout << "Marca   " << setw(12) << lanche.marca << endl;
    cout << "Peso    " << setw(12) << lanche.peso << endl;
    cout << "Caloria " << setw(12) << lanche.calorias << endl;

    return 0;
}
