#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    while (++i < 4)
    cout << "Oi! ";
    do
    cout << "Tchau! ";
    while (i++ <= 8);

    return 0;
}
//output: oi! oi! oi!; i == 4; Tchau! Tchau! Tchau! Tchau! Tchau! Tchau!;
//i: 5 6 7 8 9 10