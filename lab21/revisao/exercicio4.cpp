#include <iostream>
using namespace std;

int main()
{
    const int CH = 60;
    double MF = 1.5, N4 = 6.5;
    int F = 11;    
    
    if((F <= 0.25 * CH)) {
        if ((MF * 0.4 + N4 * 0.6) >= 5.0){
            
            cout << "Aprovado\n";
        }
        else{
            
            cout << "Reprovado\n";    
        }
    }else {
        cout << "Reprovado\n";
    }
    
    
}
    
