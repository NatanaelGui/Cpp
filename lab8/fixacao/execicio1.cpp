#include<iostream>
using namespace std;

float imc(float, float);
double imc(double, double);

int main() {
	cout << fixed;
	cout.precision(15);

	cout << left;
	cout.width(10); cout << "float: " << imc(1.75f, 80.0f) << endl;
	
	cout << left;
	cout.width(10);	cout << "double: " << imc(1.75, 80.0) << endl;

	return 0;
}

float imc(float altura, float peso)
{	
	return (peso / (altura * altura));
}

double imc(double altura, double peso)
{	
	return (peso / (altura * altura));
}