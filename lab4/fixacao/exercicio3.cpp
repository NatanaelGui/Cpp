#include <iostream>
using namespace std;

void UmTres(void);
void Dois(void);

int main(){
    cout << "Começando agora:\n";
    UmTres();
    Dois(); 
    cout << "Três\n";
    cout << "Pronto !\n";
    return 0;
}

void Dois(void){
    cout << "Dois ";
}

void UmTres(void){
    cout << "Um ";
}