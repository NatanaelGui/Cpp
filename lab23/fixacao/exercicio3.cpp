#include <iostream>
#include <fstream>
using namespace std;

int isVogal(char ch){

    if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' 
    || ch == 'i' || ch == 'o' || ch == 'O' || ch == 'U' || ch == 'u'){
        return 1;
    }
    
    else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){

        return 0;
    }
    
    return -1;
}

int main()
{

    ifstream fin;
    fin.open("situacaoAlunos.txt");
    
    if(!fin.is_open()){
        
        cout << "Falha na abertura do arquivo!";
        exit(EXIT_FAILURE);
    }

    int totalCh = 0, totalVogal = 0, totalConsoantes = 0, outrosCh = 0;
    char ch;
    
    fin.get(ch);
    while(!fin.eof()){
        
        ++totalCh;
        if(isVogal(ch) == 1){
            ++totalVogal;
        }
        else if(isVogal(ch) == 0){
            ++totalConsoantes;
        }
        else if(isVogal(ch) == -1){
            ++outrosCh;
        }
        
        fin.get(ch);
    }
    

    cout << endl << "Arquivo lido com sucesso!" << endl << endl;
    cout << "Total de Vogais: " << totalVogal << endl;
    cout << "Total de Consoantes: " << totalConsoantes << endl;
    cout << "Total de Outros Caracteres: " << outrosCh << endl;
    cout << "Total de Caracter: " << totalCh << endl;

    fin.close();
    return 0;
}
