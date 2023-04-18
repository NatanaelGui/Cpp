#include<iostream>

using namespace std;
int main ()
{ 	
	cout << "\n\n";
	cout << left; cout.width(14); cout << "Produto";
	cout << left; cout.width(16); cout << "Preço/Kg";
	cout << left; cout.width(20); cout << "Total Parcial";
	cout << "Pedido (Kg)" << endl;
		
	cout << left; cout.width(14); cout << "--------";
	cout << left; cout.width(16); cout << "--------";
	cout << left; cout.width(20); cout << "------------";
	cout << "----------" << endl;	
	
	cout << left; cout.width(14); cout << "Alface";
	cout << left; cout.width(16); cout << "R$ 1,25/Kg";
	cout << left; cout.width(20); cout << "3,2Kg";
	cout << "R$ 4,00" << endl;

	cout << left; cout.width(14); cout << "Beterraba";
	cout << left; cout.width(16); cout << "R$ 0,65/Kg";
	cout << left; cout.width(20); cout << "6,0Kg";
	cout << "R$ 3,90" << endl;

	cout << left; cout.width(14); cout << "Cenoura";
	cout << left; cout.width(16); cout << "R$ 0,90/Kg";
	cout << left; cout.width(20); cout << "10Kg";
	cout << "R$ 9,00" << endl;
	cout << "\n\n";
	 return 0;
}
