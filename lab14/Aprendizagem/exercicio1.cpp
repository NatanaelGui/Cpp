#include <iostream>
using namespace std;

struct Tigela {
    bool cheia;
    bool sopa;
     
};

void fome (Tigela &ptr);
int main()
{
    Tigela tigela = {true, true};
    Tigela *ptr = &tigela;
    cout << "Antes da fome: " << ptr->cheia << endl;
    fome(*ptr);
    cout << "Depois da fome: " << ptr->cheia << endl;
    
}

void fome (Tigela &ptr){
    ptr.cheia = false;
}