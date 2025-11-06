#include<iostream>
using namespace std;

int main()
{    
    
    char ch;
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    cout << "Digite uma frase (@ para finalizar): ";
    cin.get(ch);
    while (ch != '@')
    {
        switch (ch)
        {
        case 'a':                        
        case 'A':
            ++a;
            break;
        case 'e':                        
        case 'E':
            ++e;
            break;
        case 'i':                        
        case 'I':
            ++i;
            break;
        case 'o':                        
        case 'O':
            ++o;
            break;
        case 'u':                        
        case 'U':
            ++u;
            break;        
        }
        cin.get(ch);
    }
    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;
    
    return 0;
}
