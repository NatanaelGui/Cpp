#include <iostream>
using namespace std;

int main() {

	cout << left; cout.width(10); cout << "short:";
	cout << right; cout.width(6); cout << sizeof(short) << " bytes" << endl;

	cout << left; cout.width(10); cout << "int:";
	cout << right; cout.width(6); cout << sizeof(int) << " bytes" << endl;

	cout << left; cout.width(10); cout << "long:";
	cout << right; cout.width(6); cout << sizeof(long) << " bytes" << endl;

	cout << left; cout.width(10); cout << "long long:";
	cout << right; cout.width(6); cout << sizeof(long long) << " bytes" << endl;

	cout << left; cout.width(10); cout << "Total:";
	cout << right; cout.width(6); cout << sizeof(int) + sizeof(short) + sizeof(long) + sizeof(long long) << " bytes" << endl;

	return 0;
}