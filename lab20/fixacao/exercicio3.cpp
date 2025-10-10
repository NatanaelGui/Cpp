#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    cout << "Digite ate 10 valores de donativos (zero para encerrar): ";   
    int vet[10];
    for(int i = 0; i < 10; i++){
        
        cin >> vet[i];        
        
        if(vet[i] == 0){
            break;
        }
    }

    int media = 0, qtdValores = 0;
    for(int i = 0; vet[i]; i++){
        
        media += vet[i];
        ++qtdValores;
    }

    media = media / qtdValores;

    int qtdMaiorQueMedia = 0;
    for(int i = 0; vet[i]; i++){
        

        if(vet[i] > media){

            ++qtdMaiorQueMedia;
        }
    }

    cout << fixed << setprecision(1) << "A media dos valores doados foi de R$" << double(media) << ".\n";    
    cout << qtdMaiorQueMedia << " valores foram maiores que a media.\n";
    return 0;
}
