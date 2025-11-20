#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main()
{
    ifstream fin;// ler do arquivo sol.txt
    fin.open("sol.txt");
    if (!fin.is_open())
    {
        cout << "Abertura do arquivo sol.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }
    ofstream fout;//escrever no arquivo num.txt
    fout.open("num.txt");
    if (!fout.is_open())
    {
        cout << "Abertura do arquivo num.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }

    char ch[255];
    for (int i = 0; !fin.eof(); i++){

        fin >> ch;
        if(isdigit(ch[0])){
            
            fout << ch << endl;
        }
        
    }

    fin.close();
    fout.close();
    cout << "Pronto!" << endl;
    return 0;
}