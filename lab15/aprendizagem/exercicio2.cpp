#include <iostream>
using namespace std;

int main()
{
    
    int *ptr = new int;
    *ptr = 100;
    cout << "Conteudo armazenado: " << *ptr << endl;
    cout << "Digite novo valor para esse bloco de memoria: ";
    cin >> *ptr;
    cout << "Novo Valor Apontado: " << *ptr << endl;
    delete ptr;
    cout << "Ponteiro Deletado: " << *ptr << endl;
}
