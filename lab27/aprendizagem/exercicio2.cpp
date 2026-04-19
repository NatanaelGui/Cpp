#include <iostream>
using namespace std;

struct Controller
{
    char name[40];
    int buttons;
    int axis;
};

inline void ListarNomes(Controller c){
    
    cout << "Nomes: " << c.name << endl;
}

inline void ListarEixos(Controller c){
    
    cout << "Eixos: " << c.axis << endl;
}

void Enumerate(void(*f)(Controller))
{
    Controller vet[] =
    {
        {"Joy", 8, 4},
        {"Xbox", 10, 3},
        {"Play", 8, 6}
    };

    for (auto i : vet)
        f(i);
}

int main()
{
    Enumerate(ListarNomes);
    cout << "---------------\n";
    Enumerate(ListarEixos);
    
    return 0;
}