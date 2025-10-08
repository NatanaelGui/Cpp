#include <iostream>
#include <cstring>
using namespace std;

bool contemPronto(char *ch){
    char *aux = ch;
        
    for(int i = 0; aux[i]; ++i){

        if(aux[i] == 'p' && aux[i+1] == 'r' && aux[i+2] == 'o' &&
           aux[i+3] == 'n' && aux[i+4] == 't' && aux[i+5] == 'o'){
            
            return true;
        }
    }
    
    return false;
}

int main()
{
    cout << "Digites palavras (pronto para parar): ";
    char ch[500] = " ";    
    int qtdPalavras = 0;

    while (contemPronto(ch) == false)
    {

        cin.getline(ch, 500);        
        
        for (int i = 0; ch[i]; ++i)
        {            

            if (ch[i] == ' ' || ch[i] == '\n' || ch[i] == '\0' || ch[i] == '\f')
            {                                

                char aux[i+1];

                for(int a = 0; a < i; a++){
                    aux[a] = ch[a];
                }
                
                aux[i] = '\0';
                                
                if(contemPronto(aux) == true){
                    
                    cout << "Quantidade de palavras: " << qtdPalavras << endl;
                    return 0;
                }
                ++qtdPalavras;
            }            
        }
        
    }

    cout << "Quantidade de palavras: " << qtdPalavras << endl;
    return 0;
}
