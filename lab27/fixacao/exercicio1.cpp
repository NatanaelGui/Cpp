#include<iostream>
using namespace std;

inline int maxNum(int num1, int num2){
    
    return num1 >= num2 ? num1 : num2;
}

inline int minNum(int num1, int num2){
        
    return num1 <= num2 ? num1 : num2;
}

inline int absoluteNum(int num){
        
    return num < 0 ? num * -1 : num;
}

inline char toUper(char ch){
        
    return ch <= 96 || ch >= 123 ? ch : ch - 32;
}

int main()
{

    cout << "Maior numero: " << maxNum(5, 3) << endl;
    cout << "Menor numero: " << minNum(5, 3) << endl;
    cout << "Numero absoluto: " << absoluteNum(-5) << endl;
    cout << "Caractere para maiusculo: " << char(toupper('a')) << endl;
    return 0;
}
