#include<iostream>
#include<fstream>
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
    fout.open("valores.txt", ios_base::out);

    if(!fout.is_open()){
        cout << "Arquivo nao abriu!!" << endl;
    }

    char ola[] = "Ola mundo!";
    fout.write(ola, sizeof(ola));
}

int main()
{
   
    // double vet[5] = {128, 8, 16, 32, 64};
    // cout << "Maior Elemento: " << maiorElemento(vet, 5) << endl;
    criaArquivo();
    return 0;
}
