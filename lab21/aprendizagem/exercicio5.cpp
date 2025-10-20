#include <iostream>
using namespace std;

bool isPrimo(int num){

    if(num < 2){
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

    cout << "O primeiro numero primo eh 2, deseja ir de 2 ate qual posicao: ";
    unsigned posicao, cont = 1;
    cin >> posicao;
    for (int i = 2; cont <= posicao; i++ ){

        if(isPrimo(i)){
            cout << "Resultado: " << i << " " << endl;
            ++cont;
        }
    }
    return 0;
}
