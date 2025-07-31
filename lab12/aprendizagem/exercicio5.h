#include <iostream>
#include <iomanip>
using namespace std;

struct Data {
    short dia;
    short mes;
    short ano;
};

struct Horario {
    short hora;
    short minuto;
    short segundo;
};

struct Evento {
    Data data;
    Horario horario;
    string local;
};

Horario operator-(Horario inicio, Horario fim){
    Horario h;
    h.hora = (((fim.hora * 60 + fim.minuto) - (inicio.hora * 60 + inicio.minuto)) / 60);
    h.minuto = ((fim.hora * 60 + fim.minuto) - (inicio.hora * 60 + inicio.minuto)) % 60;
    return h;
}

istream &operator>>(istream &cin, Data &data){
    cin >> data.dia;
    cin.get();
    cin >> data.mes;
    cin.get();
    cin >> data.ano;
    return cin;
}

/*istream &operator>>( istream &cin, Horario &hora){    
    cin >> hora.hora;
    cin.get();
    cin >> hora.minuto;
    cin.get();
    cin >> hora.segundo;
    return cin;
}*/

istream &operator>>( istream &cin, Horario &hora){    
    cin >> hora.hora;
    cin.get();
    cin >> hora.minuto; 
    return cin;
}

ostream& operator<<(ostream &cout, Evento &evento){
    cout << "===============================\n";
    cout << "Data do evento: ";
    cout << setfill('0') << setw(2) << evento.data.dia << '/' << setw(2) << evento.data.mes << '/' << evento.data.ano;
    cout << "\nHorario: ";
    cout << setfill('0') << setw(2) << evento.horario.hora << ':' << setw(2) << evento.horario.minuto << ':' << setw(2) << evento.horario.segundo;
    cout << "\nLocal: " << evento.local;
    cout << "\n===============================\n ";
    return cout;
}