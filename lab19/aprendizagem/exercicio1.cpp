#include <iostream>
using namespace std;


int main()
{

    int soma[4] = {0};
    int matrix[4][4] = {
        3, 1, 5, 5,
        1, 5, 5, 6,
        2, 3, 4, 5,
        4, 9, 1, 8
    };

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
        
            soma[i] += matrix[j][i];
        }    
    }

    cout << "soma da colunas e: ";
    for(int i = 0; i < 4; i++){
        cout << soma[i] << " ";
    }
    cout << endl;
    return 0;
}
