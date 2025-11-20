#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    
    if(system("vol >> vol.txt")){
        exit(EXIT_FAILURE);
    }
    cout << endl << "Arquivo escrito com sucesso!" << endl;
    return 0;
}
