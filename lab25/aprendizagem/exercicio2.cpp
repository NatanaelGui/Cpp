#include <iostream>
#include <fstream>
using namespace std;

char fileName[255];

void createFile(){
    
    ofstream fout;
    fout.open(fileName, ios_base::out | ios_base::trunc);
    if(!fout.is_open()){
        cout << "Erro ao criar o arquivo!!!" << endl;
        exit(EXIT_FAILURE);
    }

    int num;
    srand(static_cast<unsigned int>(time(nullptr))); //semente do rand() 
    
    for (int i = 0; i < 100; i++){
        
        num = rand() % 101;        
        fout << num << ", ";
    }
    
    fout.close();
}

void readFile(int* vet){
    ifstream fin;
    fin.open(fileName, ios_base::in);

    if(!fin.is_open()){

        cout << "Erro ao ler o arquivo!" << endl;
        exit(EXIT_FAILURE);
    }

    int num;
    char ch;
    while(fin >> num){        
        
        *vet = num;
        vet++;        
                        
        fin >> ch;        
    }    
    
    fin.close();
}

struct DataFile
{    
    int biggest;
    int smallest;
    int iBiggest = 0;
    int iSmallest = 0;
};


DataFile findNumber(int* vet){

    DataFile dataFile;
    dataFile.biggest = *vet;
    dataFile.smallest = *vet;
    
    for(int i = 1; i < 100; ++i){
        
        if(dataFile.biggest < vet[i]){
            
            dataFile.biggest = vet[i];
            dataFile.iBiggest = i;
        }

        if(dataFile.smallest > vet[i]){
            
            dataFile.smallest = vet[i];
            dataFile.iSmallest = i;
        }            
    }

    return dataFile;
}

int main()
{    
    int vet[100];    
    DataFile dataFile;

    cout << "Digite o nome do arquivo: ";
    cin.getline(fileName, 255);

    createFile();
    readFile(vet);
    dataFile = findNumber(vet);
         
    cout << "A posição (" << dataFile.iSmallest << ") contém o menor número (" << dataFile.smallest << ')' << endl;
    cout << "A posição (" << dataFile.iBiggest << ") contém o maior número (" << dataFile.biggest << ')' << endl;
    return 0;
}
