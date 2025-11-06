#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    int letras = 0;
    char ch;
    cin >> ch;
    
    while (!(ch == '!' || ch == '?'))
    {
        // if (ch == '?')
        //     break;

        while (!isalpha(ch))
        {

            cin >> ch;
            // continue;
        }
        letras++;
        cin >> ch;
    }    

    return 0;
}