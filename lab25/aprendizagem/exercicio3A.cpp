#include <iostream>
using namespace std;

int locate(int vet[], const int VET_SIZE, int num){

    int index = VET_SIZE - 1;
    for(int i = 0; i < VET_SIZE; ++i){
        
        if(num > vet[i]){
            
            index = i;
        }
    }

    return index;
}

void openSpace(int vet[], const int VET_SIZE, int index, int num){

    int tempVet[VET_SIZE] = {0};
    for (int i = 0; i < index; ++i){
        
        tempVet[i] = vet[i+1];
    }

    tempVet[index] = num;

    for (int i = index; i < VET_SIZE ; ++i){
        
        tempVet[i+1] = vet[i+1];
    }
    
    for (int  i = 0; i < VET_SIZE; i++){
        
        *vet = tempVet[i];
        vet++;
    }
        
}

void getVet(int vet[], const int VET_SIZE) { 
    
    for(int i = 0; i < VET_SIZE; ++i){
        cout << vet[i] << " ";
    }
}

int main()
{
    const int VET_SIZE = 20;
    int vet[VET_SIZE] = {0}, num, index;
    
    cout << "Digite " << VET_SIZE << " valores: ";
    
    for(int i = 0; i < VET_SIZE; ++i){

        cin >> num;            
        index = locate(vet, VET_SIZE, num);
        openSpace(vet, VET_SIZE, index, num);
        
    }    
    
    cout << "Os valores ordenados: \n";
    getVet(vet, VET_SIZE);

    return 0;
}
