#include <iostream>
#include <math.h>
using namespace std;

bool isPrimo(unsigned num){
    if (num < 2){
        return false;
    }

    else if (num <= 3){
        return true;
    }

    else if (num % 2 == 0 || num % 3 == 0){
        return false;
    }

    else {
        for (int i = 5; i * i <= num; i += 6){
            
            if (num % i == 0 || num % (i + 2) == 0){
                
                return false;
            }
        }

        return true;
    }
}

int main()
{
    unsigned resultado = 1, potencia;

    for(int i = 2; i <= 20; ++i){

        if (isPrimo(i)){

            for(potencia = 1; pow(i, potencia) <= 20; ++potencia){}
            --potencia;            
            resultado *= pow(i, potencia);
        }
    }

    cout << "Resultado: "<< resultado << endl;
    return 0;
}
