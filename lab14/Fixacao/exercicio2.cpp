#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    char *ptrCh = &ch;
    *ptrCh = 'B';

    cout << ch << endl;
    cout << *ptrCh << endl;
}