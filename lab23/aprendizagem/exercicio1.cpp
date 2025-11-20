#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
    
    ifstream fin;
    cout << "Nome do arquivo: ";
    char nomeArquivo[255];
    cin >> nomeArquivo;
    
    fin.open(nomeArquivo);
    if(!fin.is_open()){
        cout << "Erro ao ler o arquivo!" << endl;
        exit(EXIT_FAILURE);
    }    
    
    int qtdCharArquivo = strlen(nomeArquivo);        
    nomeArquivo[qtdCharArquivo - 4] = '\0';
    strcat(nomeArquivo, "_m.cpp");

    ofstream fout;
    fout.open(nomeArquivo);
    if(!fout.is_open()){

        cout << "Erro ao escrever no arquivo!" << endl;
        exit(EXIT_FAILURE);
    }

    fout << "// " << nomeArquivo << endl;
    fout << "#define print cout" << endl;

    char c;    
    while ((c = fin.get()) != EOF)
    {
        
        if(c == 'c')
        {
            char aux[10];
            fin >> aux;            
            
            if(!strcmp(aux, "out"))
                fout << "print";
            
            else
                fout << 'c' << aux;                     
        }
        else 
        {
            fout << c;
        }
    }
    
    cout << "Arquivo escrito com sucesso!" << endl;
    fout.close();
    fin.close();    
    return 0;
}
