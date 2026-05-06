#include <iostream>
#include <fstream>
using namespace std;

void unidade(ifstream & fin, const int unidade, const int qtdLinhas = 10);

int main() {
    
    ifstream fin;
    fin.open("stats.txt");
    unidade(fin, 1);
    unidade(fin, 2);
    unidade(fin, 3);
    fin.close();
    
    return 0;
}

void unidade(ifstream & fin, const int unidade, const int qtdlinhas){
    int num, revisao = 0, fixacao = 0, apredizagem = 0;
    
    for (int i = 0; i < qtdlinhas; i++)
    {
        
        fin >> num; //O primeiro dado eh o numero do laboratorio
        
        fin >> num;
        revisao += num;

        fin >> num;
        fixacao += num;

        fin >> num;
        apredizagem += num;
    }
    
    cout << "-----------" << endl;
    cout << unidade << "a unidade" << endl;
    cout << "-----------" << endl;
    cout << "Revisao: " << revisao << endl;
    cout << "Fixacao: " << fixacao << endl;
    cout << "apredizagem: " << apredizagem << endl;
    cout << "-----------" << endl;
    cout << "Total: " << revisao + fixacao + apredizagem << endl << endl;

}