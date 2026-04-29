#include <iostream>
using namespace std;

struct tupla
{
    int a;
    int b;
    int c;
};

void trocar(tupla & tupla_A, tupla & tupla_B){

    tupla temp = tupla_A;
    tupla_A = tupla_B;
    tupla_B = temp;    
}

int main()
{    
    
    tupla tuplas[2];
    
    for (int i = 0; i < 2; i++){
        
        i == 0 ? cout << "Tupla A: " : cout << "Tupla B: ";
        cin >> tuplas[i].a;
        cin >> tuplas[i].b;
        cin >> tuplas[i].c; 
    }        

    cout << endl << "Invertendo..." << endl << endl;
    trocar(tuplas[0], tuplas[1]);    

    for (int i = 0; i < 2; i++){
        
        i == 0 ? cout << "Tupla A: " : cout << endl << "Tupla B: ";
        cout << tuplas[i].a << ' ';
        cout << tuplas[i].b << ' ';
        cout << tuplas[i].c;
    }
        
    return 0;
}
