#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ultimoCh(string str);
    cout << "Digite uma palavra: ";
    string str;
    cin >> str;
    cout << "Em " << str << " a ultima letra eh: " << ultimoCh(str) << "." << endl;

	return 0;
}

char ultimoCh(string str){
    unsigned short ultimoCh = 0;
    ultimoCh = str.length();
    return str[ultimoCh - 1];
}