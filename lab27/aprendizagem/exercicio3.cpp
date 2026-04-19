#include <iostream>
using namespace std;

void (*OnClick)(void);

void CreateButton(int x, int y, void (*ptr)()){
    cout << "Botao criado na posicao " << x << ", " << y << endl;
    OnClick = ptr;
}

void Mensagem()
{
    cout << "Botao Pressionado!" << endl;
}

int main()
{
    CreateButton(10, 10, Mensagem);
    
    // simulando pressionamento
    cout << "Pressionar Botao? ";
    char resposta;
    cin >> resposta;
    if (resposta == 'S' || resposta == 's')
        OnClick();
    
    return 0;
}