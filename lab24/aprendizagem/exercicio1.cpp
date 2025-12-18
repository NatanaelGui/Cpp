/*
* Os arquivos binários armazenam todo o tamanho da variável, independentemente do tamanho do dado escrito nela. 
* Nesse caso, o arquivo binário vai ser menor, já que o i do for é um char. Caso i fosse um int, cada número iria 
* ocupar 32 bits em vez de 8 bits, tornando o .bin maior que o .txt.
* No arquivo de texto, o número de 1 a 9 é um char de 8 bits, então o 10 ocupa 16 bits e 100 24 bits.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fin_txt, fin_bin;
    fin_txt.open("naturais.txt");
    fin_bin.open("naturais.bin", ios_base::binary | ios_base::in | ios_base::trunc);
    if(!fin_txt.is_open())
    {
        cout << "ERRO NA ABERTURA DO TXT!" << endl;
        return EXIT_FAILURE;
    }
    
    if(!fin_bin.is_open())
    {
        cout << "ERRO NA ABERTURA DO BIN!" << endl;
        return EXIT_FAILURE;
    }

    for(char i = 1; i <= 100; ++i)
    {
        fin_txt << int(i);
        fin_bin.write((char *) &i, sizeof(i));
    }
    fin_txt.close();
    fin_bin.close();
    cout << "Arquivos gravados com sucesso!" << endl;

    return 0;
}
