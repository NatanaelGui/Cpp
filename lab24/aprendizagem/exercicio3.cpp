#include<iostream>
#include<fstream>
using namespace std;
union Senha {    
    char alfanumerica[40];
    int numerica;
};

void gravaSenha(Senha s, char tipo)
{
    Senha senha = s;
    ofstream fout;
    fout.open("senha.bin", ios_base::binary | ios_base::out | ios_base::trunc);
    fout.write(&tipo, sizeof(tipo));
    
    if(tipo == '1')
    {
        fout.write((char*) &senha.alfanumerica, sizeof(senha));
    }
    else if(tipo == '2')
    {
        fout.write((char*) &senha.numerica, sizeof(senha));
    }
    else
    {
        cout << "ERRO: Tipo de senha invalida!" << endl;
        exit(EXIT_FAILURE);
    }
    fout.close();
}

char obtemTipoSenha(){
    ifstream fin;
    fin.open("senha.bin", ios_base::binary | ios_base::in);
    char tipoSenha;
    fin.read(&tipoSenha, sizeof(tipoSenha));
    fin.close();
    return tipoSenha;
}

Senha exibeSenha()
{
    Senha senha;
    ifstream fin;
    fin.open("senha.bin", ios_base::binary | ios_base::in);
    if(!fin.is_open()){
        cout << "Nao existe senhas gravadas!" << endl;
        return senha;
    }
    
    char tipoSenha;
    fin.read((char*) &tipoSenha, sizeof(tipoSenha));    
    
    if(tipoSenha == '1'){
        fin.read((char*) &senha.alfanumerica, sizeof(senha));
        fin.close();
        return senha;
    }
    
    fin.read((char*) &senha.numerica, sizeof(senha));
    fin.close();
    return senha;    
}

int main()
{
    char opcao;
    Senha senha;
    do
    {
        cout << "=================================" << endl;
        cout << "1. Para exibir a senha gravada." << endl;
        cout << "2. Para gravar uma nova senha." << endl;
        cout << "3. Para sair." << endl;
        cout << "=================================" << endl;
        cout << "Opcao: ";
        cin >> opcao;
        cin.get();

        switch(opcao)
        {
            case '1':                                 
                senha = exibeSenha();
                if('1' == obtemTipoSenha())
                    cout << "Senha Alfanumerica: " << senha.alfanumerica << endl;
                
                else if ('2' == obtemTipoSenha())
                    cout << "Senha Numerica: " << senha.numerica << endl;
            break;
            
            case '2':
                cout << "====== Qual o tipo de senha =====" << endl;
                cout << "1. Para alfanumerico." << endl;
                cout << "2. Para numerico." << endl;
                char ehNumerico;
                cin >> ehNumerico;
                cin.get();

                switch (ehNumerico)
                {
                case '1':
                    cout << "Digite a senha alfanumerica: ";
                    cin.getline(senha.alfanumerica, 40);
                    
                    gravaSenha(senha, '1');
                    break;
                case '2':
                    cout << "Digite a senha numerica: ";
                    cin >> senha.numerica;
                    cin.get();
                    gravaSenha(senha, '2');
                    break;
                default:
                    cout << "Opcao invalida!!" << endl;
                    break;
                }                
            break;

            case '3':
                cout << endl << endl << "Bye bye..." << endl << endl;
            break;

            default:
                cout << "Opcao invalida!";
            break;
        }
    }while(tolower(opcao) != '3');
    return 0;
}