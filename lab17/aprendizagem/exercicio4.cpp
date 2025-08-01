#include<iostream>
using namespace std;

struct Login {
    char nome[50];
    char senha[50];
};

string isValid(Login user, Login adm){
    
    for (int i = 0; i < user.nome[i]; i++){
        
        if(user.nome[i] != adm.nome[i]){
            return "Login incorreto!\n";
        }        
    }

    for (int i = 0; i < user.senha[i]; i++){
        
        if(user.senha[i] != adm.senha[i]){
            return "Senha incorreta!\n";
        }        
    }

    return "Login e senha corretos\n";    
}
int main(){
        
    Login adm = {
        "admin", "admin"
    };

    Login user;
    cout << "Login: ";    
    cin >> user.nome;

    cout << "Senha: ";
    cin >> user.senha;

    cout << isValid(user, adm);

    return 0;
    
}
