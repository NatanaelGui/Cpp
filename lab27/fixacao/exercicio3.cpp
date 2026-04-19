#include <iostream>
using namespace std;

inline double calcular(double, double, double(*ptr)(double, double));
inline double soma(double, double);
inline double divide(double, double);
inline double subtrai(double, double);
inline double multiplica(double, double);

int main()
{
    const int TAMANHO_VET = 4;
    double num1 = 20.5, num2 = 10.3, resultado = 0;
    char operacoes[TAMANHO_VET][13] = {"Soma: ", "Divide: ", "Subtrai: ", "Multiplica: "};
    double (*vet[TAMANHO_VET])(double, double) = { soma, divide, subtrai, multiplica };
    
    cout << "===== Operacoes com " << num1 << " e " << num2 << " =====" << endl;
    
    for (int i = 0; i < TAMANHO_VET; ++i){
        
        cout << operacoes[i];
        cout << calcular(num1, num2, *vet[i]) << endl;
    }
    
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