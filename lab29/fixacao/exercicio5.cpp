#include <iostream>
using namespace std;

template< typename T>
T maxn(const T vector[], const int qtdElementos){
     
    T maiorElemento = 0;
    for (int i = 0; i < qtdElementos; ++i){
        
        if(vector[i] > maiorElemento)
            maiorElemento = vector[i];
    }

    return maiorElemento;
}

int main()
{

    int seisInt[5] = {1, 2, 3, 4, 5};
    double quatroDouble[4] = {7.2, 8.3, 9.4, 10.5};
    
    cout << "===== Maior Elemento =====" << endl;
    cout << "O maior elemento dos int eh: " << maxn(seisInt, 6) << endl;
    cout << "O maior elemento dos double eh: " << maxn(quatroDouble, 4) << endl;
    return 0;
}
