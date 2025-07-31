#include <iostream>
#include <iomanip>
using namespace std;

struct Chocolate
{
    char marca[20] = "Charge";
    float peso = 2.3;
    int calorias = 350;
};
void exibeChocolate(Chocolate);
int main()
{
    Chocolate prestigio = {"Prestigio", 3.3, 150};
    Chocolate choquito = {"Choquito", 3.2, 155};
    Chocolate charge;

    Chocolate vetChocolate[3] = {prestigio, choquito, charge};
    exibeChocolate(vetChocolate[0]);
    exibeChocolate(vetChocolate[1]);
    exibeChocolate(vetChocolate[2]);
    return 0;
}

void exibeChocolate(Chocolate chocolate)
{
    cout << "===========================" << endl;
    cout << setfill('.');
    cout << "Marca   " << setw(12) << chocolate.marca << endl;
    cout << "Peso    " << setw(12) << chocolate.peso << endl;
    cout << "Caloria " << setw(12) << chocolate.calorias << endl;
    cout << "===========================" << endl;
}