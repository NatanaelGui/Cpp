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
    
    char ch;
    for(int i = 0; i < 8; ++i){
        
        fin.get(ch);
    }
    cout << ch << endl;
    fin.close();
    return 0;
}