#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("intro.txt");
    if (!fin.is_open())
    {
        cout << "Abertura do arquivo falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }
    
    char ch[255];
       
    for(int i = 0; i < 5; ++i){

        fin >> ch;
    }

    cout << ch << endl;
    fin.close();
    return 0;
}