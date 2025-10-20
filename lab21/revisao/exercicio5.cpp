#include <iostream>
using namespace std;

int main()
{    
    long long i = 1;

    for(;!((i % 3 == 2) && (i % 5 == 3) && (i % 7 == 4)); i++){

        cout << i << ", ";
    }

    // while(!((i % 3 == 2) && (i % 5 == 3) && (i % 7 == 4))){

    //     cout << i << ", ";
    //     ++i;
    // }
    cout << "\nO Numero é: " << i << endl;

    
}
    
