#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    
    ifstream fin;
    int num, qtdElementos;
    
    fin.open("vet.dat", ios_base::binary | ios_base::in);
    if(fin.is_open())
    {
        cout << "O arquivo vet.dat contem: " << endl;
		fin.read((char *) &qtdElementos, sizeof(qtdElementos));
        for (int i = 0; i < qtdElementos; i++)
        {
            
			fin.read((char *) &num, sizeof(num));
            cout << num << ' ';
        }        
        cout  << endl << endl;
    }
    fin.close();

    ofstream fout;
    int qtdNumero = 0;
    fout.open("vet.dat", ios_base::binary | ios_base::out);
    cout << "Digite numeros (zero para encerrar): " << endl;
    
    cin >> num;
    const int ZERO = 0;
    while(num != 0){
        if(qtdNumero == 0)
        {
            fout.write((char *) &ZERO, sizeof(ZERO));            
        }
        
        fout.write((char *) &num, sizeof(num));
        ++qtdNumero;
        cin >> num;
    }

    fout.seekp(0, ios_base::beg);
    fout.write((char*) &qtdNumero, sizeof(qtdNumero));

    fout.close();
    cout << qtdNumero << " numeros foram armazenados em vet.dat." << endl << endl;
    return 0;
}
