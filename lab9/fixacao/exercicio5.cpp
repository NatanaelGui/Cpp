#include <iostream>
using namespace std;
main(){
    double numDouble = 245.795;
    int numInt = int(numDouble);

    numDouble *= 100;
    numInt *= 100;

    cout << "Número em um Double vezes 100: " <<numDouble << '\n';    
    cout << "Número em um Int vezes 100: " << numInt << '\n';
}