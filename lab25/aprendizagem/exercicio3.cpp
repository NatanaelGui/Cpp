#include <iostream>
using namespace std;

int locate(int *startVet, const int END_VET, int num)
{

    int index = END_VET;
    for (int i = 0; i < END_VET; i++)
    {

        if (num > startVet[i])
            index = i;
    }

    return index;
}

bool openSpece(int index, int num, int *startVet, const int END_VET)
{

    int vet[END_VET] = {0};
    for (int i = 0; i < index; i++) // Copia os numeros de starVet[] para vet a partir do segundo elemento de starVet
        vet[i] = startVet[i + 1];

    vet[index] = num; // coloca o numero que o usuario digitou na posicao certa

    index++;
    for (int i = index; i < END_VET; i++) // copia os ultimos numeros ja ordenados do vetor principal depois do index
        vet[i] = startVet[i]; // em startVet o valor do index ja foi movido para esquerda no vet

    for (int i = 0; i < END_VET; i++)        
        startVet[i] = vet[i];        
        
    return startVet[0] == 0; //Como o vetor eh preenchido a partir da ultima posicao, caso o primeiro
                        // valor seja diferente de zero, todas as posicoes foram preenchidas
}

inline void getVet(int startVet[], const int END_VET)
{

    for (int i = 0; i < END_VET; i++)    
        cout << startVet[i] << " ";    

    cout << endl;        
}

int main()
{

    const int END_VET = 10;
    int num, index, startVet[END_VET] = {0};

    cout << "Digite 10 valores: ";
    
    bool nextNumber = true;
    while(nextNumber && cin >> num)
    {
        
        index = locate(startVet, END_VET, num);
        nextNumber = openSpece(index, num, startVet, END_VET);
    }

    getVet(startVet, END_VET);    
    
    nextNumber ? cout << "Vetor nao cheio" << endl : cout << "Vetor cheio" << endl;
    return 0;
}
