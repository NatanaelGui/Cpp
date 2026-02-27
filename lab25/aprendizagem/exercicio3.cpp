#include <iostream>
using namespace std;

int locate(int* startVet, const int END_VET,int num){

    int index;
    for(int i = 0; i < END_VET; i++){

        if(num > startVet[i])
            index = i;
        
    }

    return index;
}

void getVet(int startVet[], const int END_VET){
    
    for(int i = 0; i < END_VET; i++){
        
        cout << startVet[i] << " ";
    }
}

bool openSpece(int index, int num, int* startVet, const int END_VET) {
    

    int vet[END_VET] = {0};    
    for(int i = 0; i < index; i++)//empurra os numeros para esquerda a partir do index
        vet[(index-i)-1] = startVet[index-i];
    
    vet[index] = num; //coloca o numero que o usuario digitou na posicao certa
    
    index++;
    for(int i = index; i < END_VET; i++)//copia os ultimos numeros ja ordenados do vetor principal depois do index
        vet[i] = startVet[i]; //em startVet o valor do index ja foi movido para esquerda no vet
    
    
    for (int i = 0; i < END_VET; i++){    
        *startVet = vet[i];
        startVet++;
    }

    return true;
}

int main()
{
    
    const int END_VET = 10;
    int num, index, startVet[END_VET] = {0};

    cout << "Digite 10 valores: ";
    
    for(int i = 0; i < END_VET; i++){
        cin >> num;

        index = locate(startVet, END_VET, num);                
        openSpece(index, num, startVet, END_VET);        
    }    
    
    getVet(startVet, END_VET);
    return 0;
}
