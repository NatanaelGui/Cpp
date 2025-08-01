#include <iostream>
using namespace std;

struct ASCII {
    char caracter;
    short int associado;
};

ASCII* enderecoAscii(short int associado , char caracter){

    ASCII *ascii = new ASCII;
    ascii->caracter = caracter;
    ascii->associado = associado;
    return ascii;
}

int main()
{
    cout << "Digite um caracter da tabela ASCII: ";
    char caracter;
    cin >> caracter;

    cout << "Digite um numero associado a esse caracter da tabela ASCII: ";
    unsigned short associado;
    cin >> associado;

    ASCII *ptr = enderecoAscii(associado, caracter);

    cout << "\n=====================================\n" << endl;
    cout << "Numero Associado: " << ptr->associado << endl;
    cout << "Caractere do Numero: " << ptr->caracter << endl;
    cout << "Endereco: " << ptr << endl;
    cout << "\n=====================================\n" << endl;

    delete ptr;
}