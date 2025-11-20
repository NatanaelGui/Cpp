#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream fin;
    fin.open("alunos.txt");
    if(!fin.is_open()){        
        cout << "Falha na abertura do arquivo!" << endl;
        exit(EXIT_FAILURE);
    }

    ofstream fout;
    fout.open("situacaoAlunos.txt");
    if(!fout.is_open()){        
        cout << "Falha na edicao do arquivo!" << endl;
        exit(EXIT_FAILURE);
    }

    char nome[50];
    double n1, n2, n3, media;
    
    do{

        fin >> nome;
        fin >> n1;
        fin >> n2;
        fin >> n3;
        media = (n1 + n2 + n3) / 3;

        if(media >= 5){
            fout << nome << " Aprovado\n";
        }
        else if(media >= 3){
            fout << nome << " Prova Final\n";
        }
        else{
            fout << nome << " Reprovado\n";
        }
    } while(!fin.eof());

    cout << endl << "Arquivo escrito com sucesso!" << endl;
    fout.close();
    fin.close();
    return 0;
}
