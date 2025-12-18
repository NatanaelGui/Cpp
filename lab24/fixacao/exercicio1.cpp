#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int num;    
    ifstream fin;
    
    fin.open("integer.bin", ios_base::binary);
    if(fin.is_open()){
        fin.read((char *) &num, sizeof(num));       
        cout << "arquivo integer.bin encontrado!" << endl;
        cout << "Ele contem o numero " << num << '.' << endl << endl;
    }
    fin.close();

    cout << "Digite um numero: " <<endl;
    cin >> num;

    ofstream fout;
    fout.open("integer.bin", ios_base::binary);
    if(!fout.is_open()){
        cout << "Erro ao gravar o arquivo!";
        return EXIT_FAILURE;
    }

    fout.write((char *) &num, sizeof(num));
    fout.close();
    
    cout << "Numero armazenado no arquivo integer.bin" << endl <<endl;

    return 0;
}