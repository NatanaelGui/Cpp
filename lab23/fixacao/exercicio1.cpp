#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    
    ifstream fin;
    fin.open("pescado.txt");
    if(!fin.is_open()){
        cout << "Nao foi possivel abrir o arquivo!" <<endl;
        exit(EXIT_FAILURE);
    }

    char peixes[5][50], nomePeixe[5];    
    int totalG = 0;
    
    for(int i = 0; i < 5; ++i){        
        for(int j = 0; j < 2; ++j){
            
            fin >> nomePeixe;    
        }        
        totalG += stoi(nomePeixe);
        fin.getline(peixes[i], 50);
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << peixes[i] << endl;
    }
    
    double totalKg;
    totalKg = totalG / 1000;
    totalG = totalG % 1000;
    cout << "\nTotal de quilos pescado: " << totalKg << "Kg" << " e " << totalG << "g" << endl;
    fin.close();
    return 0;
}
