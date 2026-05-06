#include<iostream>
#include<cstring>
using namespace std;

struct Guloseimas {
    
    char marca[24];
    double peso;
    int calorias;
};

void criaGuloseimas(Guloseimas & g, const char *marca = "Charge", const double peso = 40.0, const int calorias = 187){

    strcpy(g.marca, marca);
    g.peso = peso;
    g.calorias = calorias;

}

void exibeGuloseimas(const Guloseimas & g){
    
    cout << "Marca: " << g.marca << endl;
    cout << "Peso: " << g.peso << endl;
    cout << "Calorias: " << g.calorias << endl;
    cout << "================\n";
}

int main()
{
        
    cout << "====== Guloseimas ======\n";
    Guloseimas g;
    criaGuloseimas(g);
    exibeGuloseimas(g);
    
    criaGuloseimas(g, "Sonho de Valsa", 20, 105);
    exibeGuloseimas(g);
    return 0;
}
