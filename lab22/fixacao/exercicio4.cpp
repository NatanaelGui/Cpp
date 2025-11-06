#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    
    cout << "Digite palavras (s para sair): " << endl;
    char vetCh[30];
    int vogais = 0, consoantes = 0, outras = 0;
    cin >> vetCh;
    
    while(strcmp(vetCh, "s")){
                
        int i;
        for(i = 0; i < vetCh[i]; i++){

           vetCh[i] = tolower(vetCh[i]);
        }
        vetCh[i] = '\0';
            
        if(isalpha(vetCh[0])){
        
            if(vetCh[0] == 'a' || vetCh[0] == 'e' || vetCh[0] == 'i' ||
            vetCh[0] == 'o' || vetCh[0] == 'u'){
                ++vogais;
            }else {
                ++consoantes;
            }
        } 
        else {
            ++outras;
        }
                
        cin >> vetCh;
    }

    cout << endl << vogais << " palavras comecam por vogais" << endl;
    cout << consoantes << " palavras comecam por consoantes" << endl;
    cout << outras << " outras palavras" << endl;

    return 0;
}