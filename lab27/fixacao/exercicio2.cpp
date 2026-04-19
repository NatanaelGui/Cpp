#include <iostream>
using namespace std;

inline double calcular(double, double, double(*ptr)(double, double));
inline double soma(double, double);
inline double divide(double, double);
inline double subtrai(double, double);
inline double multiplica(double, double);

int main()
{

    double num1 = 20.5, num2 = 10.3;
    double resultado = calcular(num1, num2, soma);
    cout << "Soma: " << resultado << endl;

    resultado = calcular(num1, num2, divide);
    cout << "Divide: " << resultado << endl;

    resultado = calcular(num1, num2, subtrai);
    cout << "Subtrai: " << resultado << endl;

    resultado = calcular(num1, num2, multiplica);
    cout << "Multiplica: " << resultado << endl;
    
    return 0;
}

inline double calcular(double num1, double num2, double(*ptr)(double, double)){
    
    return ptr(num1, num2);
}

inline double divide(double num1, double num2){
    
    return num1 / num2;
}

inline double subtrai(double num1, double num2){
    return num1 - num2;
}

inline double multiplica(double num1, double num2){
    
    return num1 * num2;
}

inline double soma(double x, double y){
    
    return x + y;
}