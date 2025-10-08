#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 5; ++i){

        for(int j = i; j < 4; ++j){
            cout << ' ';
        }

        for(int j = 0; j < i; ++j){
            cout << '$';
        }

        cout << '$';

        for(int j = 0; j < i; ++j){
            cout << '$';
        }
        cout << '\n';
    }

    return 0;
}
