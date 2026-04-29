#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct par { 
    int x; 
    int y;
};

ostream& operator<< (ostream& o, par t){
    return o << t.x << ',' << t.y;
}

void createFile(){
    
    ofstream fout;
    fout.open("numbers.txt", ios_base::out | ios_base::trunc);
    if(!fout.is_open()){
        cout << "Erro na criacao/escrita do arquivo!";
        exit(EXIT_FAILURE);
    }
    
    srand(time(nullptr));

    int num = rand();
    num = num % 100;
    
    int result;
    for(int i = 0; i < num; ++i){
        result = rand();
        result = result % 100;
        fout << result << ' ';
    }

    fout.close();
}

void readFile(){
    ifstream fin;
    fin.open("Numbers.txt");
    if(!fin.is_open()){
        cout << "Erro na leitura do arquivo!";
        exit(EXIT_FAILURE);
    }

    par p;
    
    cout << "Pares: ";
    while (fin >> p.x)
    {                
        
        fin >> p.y;
        cout << "[" << p << "]" << ' ';
    }
    cout << endl;
    fin.close();    
}

int main()
{    
    createFile();        
    readFile();
    return 0;
}
