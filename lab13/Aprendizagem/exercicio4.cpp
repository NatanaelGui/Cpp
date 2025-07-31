#include <iostream>
using namespace std;
enum diaSemana {DOM, SEG, TER, QUA, QUI, SEX, SAB};
int main()
{
 char semana[7][14] = {
    "Domingo", "Segunda-Feira", "Terca-Feira", "Quarta-Feira", "Quinta-Feira", "Sexta-Feira",
    "Sabado"
};

for (diaSemana ind = DOM; ind <= SAB; ind = diaSemana(ind + 1)){
    cout << semana[ind] << endl;
}
 return 0;
}