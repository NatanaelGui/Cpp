#include <iostream>
using namespace std;

int main()
{
    
    cout << "Digite um numero inteiro maior que zero, e determinarei se é primo: ";
    int num;
    cin >> num;
    if (num < 2){

        cout << num << " nao eh numero primo!";        
    }

    else if (num <= 3){

        cout << num << " eh um numero primo!";        
    }

    else if (num % 2 == 0 || num % 3 == 0){
        
        cout << num << " nao eh numero primo!";
    }

    else {
        for (int i = 5; i * i <= num; i += 6){
            if(num % i == 0 || num % (i + 2) == 0){
                cout << num << " nao eh numero primo!";
            }
        }
        
        cout << num << " eh um numero primo!";
    }


    return 0;
}
