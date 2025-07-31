#include <iostream>
using namespace std;

void mais(int &ptrNum);
int incrementa(int num);
int main()
{
    int num = 0, *ptrNum;
    cout << "Digite um valor: ";
    cin >> num;
    ptrNum = &num;
    mais(*ptrNum);
    cout << endl << "Resultado apos Incrementa: " << incrementa(num);
}

void mais(int &ptrNum){
    cout << endl << "Resultado apos Mais: " << ++ptrNum;
}
int incrementa(int num){
    return ++num;
}