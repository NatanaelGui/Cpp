#include <iostream>
using namespace std;


#define red "\033[31m"
#define yellow "\033[33m"
#define blue "\033[36m"
#define end "\033[m"

void print(const int num){
    cout << yellow << num << end;    
}

void print(const double num){
    cout << blue << num << end;
}

void print(const char string[]){
    cout << red << string << end;
}

int main()
{
    
    cout << "Inteiro: ";
    print(45);
    cout << "\nPonto-flutuante: ";
    print(3.9);
    cout << "\nString: ";
    print("Oi Mundo");
    cout << "\n";
}
