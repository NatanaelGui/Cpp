#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    
    cout << "Digite seu texto (@ para sair): " << endl;
    char ch;
    
    cin.get(ch);            
    while (ch != '@'){
        if(isupper(ch)){
            cout << char(tolower(ch));
        }
        else if(islower(ch)){
            cout << char(toupper(ch));            
        }
        else{
            cout << ch;
        }
        cin.get(ch);                
    }
    
    return 0;
}