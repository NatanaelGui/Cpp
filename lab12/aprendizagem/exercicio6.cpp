#include<iostream>
#include"exercicio5.h"

short diferencaM(Horario inicio, Horario fim);
main(){
    Horario horarioInicio, horarioFim, horarioDiferenca;
    cout << "Inicio: ";
    cin >> horarioInicio;
    cout << "Fim: ";
    cin >> horarioFim;
    
    short minutos = diferencaM(horarioInicio, horarioFim);
    horarioDiferenca = horarioInicio - horarioFim;
    
    cout << "\nEntre "<< horarioInicio.hora << ":" << horarioInicio.minuto << " e ";
    cout << horarioFim.hora << ":" << horarioFim.minuto  << " existem " << minutos << " minutos, " << "isso e, ";
    cout << horarioDiferenca.hora << "h e " << horarioDiferenca.minuto << " minutos.";
}

short diferencaM(Horario inicio, Horario fim){
    short minutos;
    minutos = (fim.hora * 60 + fim.minuto) - (inicio.hora * 60 + inicio.minuto);    
    return minutos;
}