#include <iostream>
using namespace std;

void linha(void);
void pequena(void);
void media(void);
void grande(void);

int main(){
    pequena();
    media();
    grande();
    cout << "Programação de Computadores\n";
    grande();
    media();
    pequena();
    return 0;
}

void linha(void){
    cout << "----------";
}
void pequena (void){
    linha();
    cout << endl;
}
void media (void){
    linha();
    linha();
    cout << endl;
}
void grande(void){
    linha();
    linha();
    linha();
    cout << endl;
}