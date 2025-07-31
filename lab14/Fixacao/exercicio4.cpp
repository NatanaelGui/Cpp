#include <iostream>
using namespace std;
struct Rbg {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

union Cor {
  Rbg rgba;
  int int32;
};

void lerRgb(Cor &c);
void lerInt32(Cor &c);
int main()
{
    Cor cor;
    Cor *ptrCor = &cor;
    cout << "Digite um cor no formato" << endl;
    cout << "RGBA : ";
    lerRgb(*ptrCor);
    cin.ignore(100, '\n');
    
    cout << "Int32: ";
    lerInt32(*ptrCor);
    
    cout << "\nBinario separado em 4 Shorts: ";
    cout << (short)cor.rgba.r;
    cout << (short)cor.rgba.g;
    cout << (short)cor.rgba.b;
    cout << (short)cor.rgba.a << endl;

    cout << "Binario completo em int: ";
    cout << cor.int32;
}

void lerRgb(Cor &c){
    cin >> c.rgba.r >> c.rgba.g >> c.rgba.b >> c.rgba.a;
}

void lerInt32(Cor &c){
    cin >> c.int32;
}