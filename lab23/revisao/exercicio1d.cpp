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
    
    fin.getline(ch, 255);    

    cout << ch << endl;
    fin.close();
    return 0;
}