#include <iostream>
#include <cstring>
using namespace std;

int main()
{    
    char ch;

    cout << "Digite um texto: " << endl;
    cin.get(ch);
    while(ch != '@'){

        cout << ch;
        cin.get(ch);
    }    
        
    return 0;
}