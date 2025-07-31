#include <iostream>
#include "exercicio5.h"
using namespace std;

main()
{
    Evento evento;
    Data data;
    Horario horario;
    
    cout << "Entre com a data, horario e local do evento: ";
    cin >> data;
    evento.data = data;
    
    cin >> horario;
    evento.horario = horario;
    
    getline(cin, evento.local);    

    cout << evento;
}

