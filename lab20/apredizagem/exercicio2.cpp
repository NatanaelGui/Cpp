#include<iostream>
using namespace std;

void exibeMulta(int vetVelocidade[10]){
    int qtdLimiteExcedido = 0, totalMultas = 0, kmExcedido;
    for(int i = 0; i < 10; ++i){
        
        if(vetVelocidade[i] > 80){
            
            kmExcedido = vetVelocidade[i] - 80;            
            cout << vetVelocidade[i] << " Km/h exede o limite = multa de R$" << kmExcedido * 8 << endl;
            totalMultas += kmExcedido * 8;
            ++qtdLimiteExcedido;
        }
    }
    cout << endl << qtdLimiteExcedido << " carros foram multados em um valor total de R$" << totalMultas << ".\n";
}

int main()
{
    cout << "As ultimas 10 velocidades registradas: " << endl;
    int vetVelocidade[10];
    
    for(int i = 0; i < 10; ++i){
        
        cin >> vetVelocidade[i];        
    }
    cout << endl;

    exibeMulta(vetVelocidade);
    return 0;
}
