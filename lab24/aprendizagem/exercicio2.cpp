#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

struct Soldado
{
    char nome[100];
    float eliminacoes;
    float mortes;
    float taxaEM;
    int partidasJogadas;
};

void erroSoldado()
{
    cout << "================================" << endl;
    cout << "Nenhum soldado encontrado!" << endl;
    cout << "Tecle [N] para cadastrar um novo" << endl;
    cout << "================================" << endl;        
}

float calcTaxaEM(float eliminacoes, float mortes)
{
    float taxaEM = 0;
    if(eliminacoes <= 0)
    {
        eliminacoes = 1;
        taxaEM = eliminacoes / mortes;        
    }
    
    else if(mortes <= 0)
    {
        mortes = 1;
        taxaEM = eliminacoes / mortes;        
    }
    else 
        taxaEM = eliminacoes / mortes;

    return taxaEM;
}

Soldado novo()
{
    Soldado soldado;
    cout << "======== Novo Soldado ========" << endl;
    
    cout << "Nome: ";
    cin.getline(soldado.nome, 100);

    cout << "Eliminacoes: ";
    cin >> soldado.eliminacoes;

    cout << "Mortes: ";
    cin >> soldado.mortes;    

    soldado.taxaEM = calcTaxaEM(soldado.eliminacoes, soldado.mortes);
    
    cout << "Partidas Jogadas: ";
    cin >> soldado.partidasJogadas;
    cout << "==============================" << endl;

    return soldado;        
}

void gravaSoldado(Soldado soldado)
{
    if(soldado.nome[0] == '\0')
        return;    

    ofstream fout;
    fout.open("soldado.bin", ios_base::out | ios_base::binary | ios_base::trunc);
    
    if(!fout.is_open())
    {
        cout << "ERRO NA GRAVACAO!" << endl;
        exit(EXIT_FAILURE);
    }

    fout.write(soldado.nome, sizeof(soldado.nome));
    fout.write((char*) &soldado.eliminacoes, sizeof(soldado.eliminacoes));
    fout.write((char*) &soldado.mortes, sizeof(soldado.mortes));
    fout.write((char*) &soldado.taxaEM, sizeof(soldado.taxaEM));
    fout.write((char*) &soldado.partidasJogadas, sizeof(soldado.partidasJogadas));
    
    fout.close();

    cout << "Soldado gravado com sucesso!" << endl;
}

Soldado lerSoldado()
{
    ifstream fin;
    Soldado soldado;
    soldado.nome[0] = '\0';
    fin.open("soldado.bin", ios_base::in | ios_base::binary);
    fin.read(soldado.nome, sizeof(soldado.nome));

    if((!fin.is_open()) || soldado.nome[0] == '\0')
    {
        erroSoldado();  
        return soldado;
    }
    fin.read((char*) &soldado.eliminacoes, sizeof(soldado.eliminacoes));
    fin.read((char*) &soldado.mortes, sizeof(soldado.mortes));
    fin.read((char*) &soldado.taxaEM, sizeof(soldado.taxaEM));
    fin.read((char*) &soldado.partidasJogadas, sizeof(soldado.partidasJogadas));
    fin.close();

    return soldado;
}

void exibe(Soldado soldado)
{
    if(soldado.nome[0] == '\0')
    {
        erroSoldado();
        return;
    }
    cout << "\n========== Soldado " << soldado.nome << " ==========\n";    
    cout << "Eliminacoes: " << soldado.eliminacoes << endl;
    cout << "Mortes: " << soldado.mortes << endl;
    cout << setprecision(2) << "Taxa de eliminacoes e mortes: " << soldado.taxaEM << endl;
    cout << "Partidas Jogadas: " << soldado.partidasJogadas << endl;
    cout << "=================================" << endl;
}

Soldado atualiza(Soldado soldado)
{
    if(soldado.nome[0] == '\0')
    {
        erroSoldado();
        return soldado;
    }

    float novosDados;
    cout << "\n===== Soldado " << soldado.nome << " =====\n";   
    cout << "Eliminacoes (ultima partida): ";
    cin >> novosDados;
    soldado.eliminacoes += novosDados;

    cout << "Mortes: ";
    cin >> novosDados;
    soldado.mortes += novosDados;    

    soldado.taxaEM = calcTaxaEM(soldado.eliminacoes, soldado.mortes);
    soldado.partidasJogadas++;

    return soldado;
}

int main()
{

    char opcao;
    Soldado soldado;
    soldado = lerSoldado();

    do 
    {
        cout << "================================" << endl;        
        cout << "[N]ovo soldado (sobrescreve o anterior)" << endl;
        cout << "[A]tualiza soldado (com os dados da ultima partida)" << endl;
        cout << "[E]xibe soldado (atual)" << endl;
        cout << "[S]air" << endl;
        cout << "================================" << endl;        

        cout << "Opcao: [ ]\b\b";
        cin >> opcao;
        cin.get();

        switch(opcao)
        {
            case 'N':
            case 'n':
                soldado = novo();
                break;
            case 'A':
            case 'a':
                soldado = atualiza(soldado);
                break;
            case 'E':
            case 'e':
                exibe(soldado);
                break;
            case 'S':
            case 's':
            break;
        }
    }while(toupper(opcao) != 'S');

    gravaSoldado(soldado);
    return 0;
}
