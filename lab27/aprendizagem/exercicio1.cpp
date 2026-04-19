#include <iostream>
using namespace std;

inline void post(){
    cout << "Dado inserido com sucesso!" << endl;
}

inline void get(){
    cout << "Dado retornado com sucesso!" << endl;
}

inline void remove(){
    cout << "Dado removido com sucesso!" << endl;
}

inline void exit(){
    cout << "Bye bye!" << endl;
    exit(EXIT_SUCCESS);
}

void methods(int num, void(*ptr[])()){
    
    ptr[num]();
}

int main()
{    

    cout << "Menu do Sistema" << endl;
    cout << "1) Inserir" << endl;
    cout << "2) Remover" << endl;
    cout << "3) Buscar" << endl;
    cout << "4) Sair" << endl;
    cout << endl;
    cout << "Escolha: ";
    
    void (*vet[4])() = {post, remove, get, exit};

    int num;    

    while (cin >> num) {                
        
        methods(num - 1, vet);
        
        if (!(num >= 1 && num <= 4))
            cout << "Numero invalido, tente novamente" << endl;
    }
    

    return 0;
}
