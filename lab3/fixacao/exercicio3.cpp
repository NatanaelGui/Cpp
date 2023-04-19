#include<iostream>

using namespace std;
int main (void)
{	
	int anos = 0, dias = 0;
	cout << "Qual a sua idade:";
	cin >> anos;
	dias = anos * 365;
	cout << anos << " anos equivalem a " << dias << " dias." << endl;	
	return 0;
}