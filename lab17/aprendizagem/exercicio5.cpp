#include<iostream>
using namespace std;

int somaDosQuadrados(){

    int resultado = 0;
    for(int i=1; i <= 100; i++) {
        resultado += i * i;
    }

    return resultado;
}

int quadradoDasSomas(){
    
    int resultado = 0;
    for(int i=1; i <= 100; i++) {
        resultado += i;
    }

    return resultado * resultado;
}
int main(){
    

    cout << "Resultado da soma dos Quadrados: " << somaDosQuadrados() << endl;
    cout << "Resultado da Quadrado das somas: " << quadradoDasSomas() << endl;
    cout << "Diferença entre eles: " << quadradoDasSomas() - somaDosQuadrados() << endl;
    
    return 0;
    
}
