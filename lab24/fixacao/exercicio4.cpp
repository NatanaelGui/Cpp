#include<iostream>
#include<fstream>
using namespace std;

struct imagem
{
    int cor, largura, altura;
};

void armazenar()
{
    imagem img;
    ofstream fout;

    fout.open("img.bin", ios_base::binary | ios_base::out | ios_base::trunc);
    
    if(!fout.is_open()){
        cout << "Erro na escrita!" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Largura: ";
    cin >> img.largura;

    cout << "Altura: ";
    cin >> img.altura;
    
    fout.write((char*) &img.largura, sizeof(img.largura));
    fout.write((char*) &img.altura, sizeof(img.altura));

    for(int i = 0; i < img.largura; ++i){
        cout << "#" << i+1 << ": ";
        
        for (int j = 0; j < img.altura; ++j){
            cin >> img.cor;
            
            if(img.cor == ' '){
                cin >> img.cor;
            }          

            fout.write((char*) &img.cor, sizeof(img.cor));
        }        
    }

    fout.close();
}

void exibir()
{
    
    imagem img;
    ifstream fin;

    fin.open("img.bin", ios_base::binary);
    if(!fin.is_open()){
        cout << "ERRO NA LEITURA!" << endl;
        return;
    }

    fin.read((char*) &img.largura, sizeof(img.largura));
    fin.read((char*) &img.altura, sizeof(img.altura));

    for(int i = 0; i < img.largura; ++i){
        
        for (int j = 0; j < img.altura; ++j){
            fin.read((char*) &img.cor, sizeof(img.cor));
            cout << "\033[48;5;" << img.cor << "m" << " " << "\033[m";
        }
        cout << endl;
    }
    
    fin.close();
}

int main()
{
    
    char opcao;    
    do
    {        
        cout << "\n-----------------" << endl;    
        cout << "Imagens Coloridas" << endl;
        cout << "-----------------" << endl;
        cout << "[A]rmazenar" << endl;
        cout << "[E]xibir" << endl;
        cout << "[S]air" << endl;
        cout << "-----------------" << endl;
        cout << "Opcao: [ ]\b\b";
    
        cin >> opcao;

        switch(opcao) 
        {
            case 'A':
            case 'a':
                armazenar();
                break;
            case 'E':
            case 'e':
                exibir();
                break;
            case 'S':
            case 's':
                break;
        }        
        
    }while(tolower(opcao) != 's');
        
    return 0;
}
