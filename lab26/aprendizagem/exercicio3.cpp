#include<iostream>
using namespace std;

#define gray "\033[90m"
#define default "\033[m"

void firstName(const char origin[], char target[]){

    int i = 0;
    for (; origin[i] != ' ' || origin[i] == '\0'; ++i){
        
        target[i] = origin[i];
    }
    
    target[i] = '\0';
}


void lastName(const char origin[], char target[]){
        
    int j = 0;
        
    for (int i = 0; origin[i]; ++i, ++j){
        
        target[j] = origin[i];
        
        if(origin[i] == ' ')
            j = -1; //vai se tornar 0 no proximo loop
    
    }        
        
    target[j] = '\0';
}

int main()
{

    cout << "Entre com os nomes a cadastrar (\'.\' para encerrar): " << endl;
    char name[255], result[255];
    
    while(cin.getline(name, 255) && name[0] != '.'){        

        firstName(name, result);
        cout << gray << result << ", " << default;
        lastName(name, result);
        cout << gray << result << default << endl;
    }

    
    return 0;
}
