#include <iostream>
using namespace std;

template <typename T>
T max5(const T vector[5]){
    
    T maiorElemento = 0;
    
    for(int i = 0; i < 5; ++i){
        
        if(vector[i] > maiorElemento)
            maiorElemento = vector[i];        
    }

    return maiorElemento;
}

int main()
{
    int cincoInt[5] = {1, 2, 3, 4, 5};
    double cincoDouble[5] = {7.2, 8.3, 9.4, 10.5, 11.6};
    
    cout << "===== Maior Elemento =====" << endl;
    cout << "O maior elemento dos int eh: " << max5(cincoInt) << endl;
    cout << "O maior elemento dos double eh: " << max5(cincoDouble) << endl;
    
    return 0;
}
