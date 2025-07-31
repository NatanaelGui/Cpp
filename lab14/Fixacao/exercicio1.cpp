#include <iostream>
using namespace std;
int main()
{
    int x, *p, **q, ***j;
    p = &x;
    q = &p;
    j = &q;
    x = 10;
    cout << ***j << endl;
}