#include<iostream>
using namespace std;

template<typename T>
void exibe(const T & text, const bool flag = false) {
    
    static int contFunction = 0;
    ++contFunction;
    
    if(flag){
        for (int i = 0; i < contFunction; i++)
            cout << text << endl;
        
        return;
    } 
    
    cout << text << endl;    
}

int main()
{
    
    exibe("Teste texto!", true);
    exibe("Teste texto!", true);
    exibe("Teste texto!", true);
    return 0;
}
