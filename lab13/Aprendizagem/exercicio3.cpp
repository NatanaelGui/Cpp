#include <iostream>
#include <iomanip>
using namespace std;

struct Data {
    unsigned short dia;
    unsigned short mes;
    unsigned short ano;
};

struct horario {
    unsigned short hora;
    unsigned short minuto;
};

struct Evento {
    Data data;
    horario horario;
    char descricao[18];
};

int main(){
    Evento evento[10];

    cout << "Entre com 2 eventos:\n#1\n";    
    cout << "Data: ";
    cin >> evento[0].data.dia >> evento[0].data.mes >> evento[0].data.ano;
    
    cout << "Hora: ";
    cin >> evento[0].horario.hora >> evento[0].horario.minuto;
    
    cout << "Desc: ";
    cin.ignore();
    cin.getline(evento[0].descricao, 18);

    cout << "\n\n#2\n";
    cout << "Data: ";
    cin >> evento[1].data.dia >> evento[1].data.mes >> evento[1].data.ano;
    
    cout << "Hora: ";
    cin >> evento[1].horario.hora >> evento[1].horario.minuto;
    
    cout << "Desc: ";
    cin.ignore();
    cin.getline(evento[1].descricao, 18);

    cout << "\n--------------------\n";
    cout << setfill('0');
    cout << "Eventos Cadastrados\n";
    
    cout << setw(2) << evento[0].data.dia << "/";
    cout << setw(2) << evento[0].data.mes << "/" << evento[0].data.ano << " ";
    cout << setw(2) << evento[0].horario.hora << ":";
    cout << setw(2) << evento[0].horario.minuto << " " << evento[0].descricao << endl;

    cout << setw(2) << evento[1].data.dia << "/";
    cout << setw(2) << evento[1].data.mes << "/" << evento[1].data.ano << " ";
    cout << setw(2) << evento[1].horario.hora << ":";
    cout << setw(2) << evento[1].horario.minuto << " " << evento[1].descricao << endl;
    return 0;
}