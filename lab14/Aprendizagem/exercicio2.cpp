#include<iostream>
using namespace std;

struct Horario {
    unsigned short hora;
    unsigned short minuto;
};

void mostrarHorario(Horario &ptr);
int main()
{
    Horario horario;
    Horario *ptr = &horario;
    cout << "Que horas sao? ";
    
    cin >> ptr->hora; 
    cin.ignore(10, ':');        
    cin >> ptr->minuto;
    mostrarHorario(*ptr);
}

void mostrarHorario(Horario &ptr) {
    cout << "Seu relogio esta atrasado, o horario correto e " << ++ptr.hora << ":" << ptr.minuto << '.';
}
