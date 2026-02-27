#include<iostream>
#include<iomanip>
#include<sstream>
#include<random>
#include<fstream>
#include<ctime>
using namespace std;

double maiorElemento(const double vet[], int fimVet){
    double maior = 0;
    for(int i = 0; i < fimVet; ++i){
        if(vet[i] > maior)
            maior = vet[i];
    }

    return maior;
}

void criaArquivo(){
    ofstream fout;
    fout.open("valores.txt", ios_base::out | ios_base::trunc);

    if(!fout.is_open()){
        cout << "Arquivo nao abriu!!" << endl;
        exit(EXIT_FAILURE);
    }

    srand(static_cast<unsigned int>(time(nullptr)));
    double num = rand() % 10;    
    int qtdLoop = 1 + num;
    

    for (int i = 0; i < qtdLoop; ++i)
    {
        num = rand() % 10;
        double num2 = rand() % 10;
        double result = num + (num2 / 10);
        stringstream s;
        s << fixed << setprecision(1) << result;
        string n = s.str();
        n += ", ";
        // cout << "Result: " << n << endl;
        fout.write(n.c_str(), n.size());
    }
    

    fout.close();
    cout << "Criado com sucesso!" << endl;
}

int lerQtdCharArquivo(){

    ifstream fin;
    fin.open("valores.txt", ios_base::in);
    if(!fin.is_open()){
        cout << "Erro ao ler o arquivo" << endl;
        exit(EXIT_FAILURE);
    }
    char arquivo;
    int qtdChar = 0;
    while(!fin.eof()){
        
        fin.read(&arquivo, sizeof(arquivo));
        // cout << "result ler: " << arquivo << endl;
        if(arquivo == ',')
            ++qtdChar;
    }
    // cout << "O arquivo tem " << qtdChar << " caracteres";
    fin.close();
    return qtdChar;
}

double* lerArquivo(){

    ifstream fin;
    fin.open("valores.txt", ios_base::in);
    if(!fin.is_open()){
        cout << "Erro ao ler o arquivo" << endl;
        exit(EXIT_FAILURE);
    }
    
    char arquivo;
    double *vet = new double[lerQtdCharArquivo()];
    int i = 0;
    double num;
    while(!fin.eof()){
        
        fin.read(&arquivo, sizeof(arquivo));        
        num = double( arquivo - '0');
        if(num <= 9 && num >= 0){            
            vet[i] = num;
        }
        if(arquivo == '.'){
            fin.read(&arquivo, sizeof(arquivo));
            num = double(arquivo - '0');
            if(num <= 9 && num >= 0){                            
                vet[i] += num / 10;
                ++i;
            }
        }
    }
    fin.close();    
    return vet;
}

int main()
{ 
    criaArquivo();    
    double *vet;
    vet = lerArquivo();
    
    double maiorNumero;
    maiorNumero = maiorElemento(vet, lerQtdCharArquivo());
    cout << "Maior numero do arquivo: " << maiorNumero << endl;
    
    delete[] vet;
    return 0;
}
