#include<iostream>
using namespace std;

const double kgAlface = 1.25, kgBeterraba = 0.65, kgCenoura = 0.90;
void pedidoParcial(double qtdKgAlface, double qtdKgBeterraba, double qtdKgCenoura, 
                   double totalAlface, double totalBeterraba, double totalCenoura){

    cout << "\n---------------------------------------------------------------" << endl;
    cout << "Produto \t Preco/Kg \t Pedido (Kg) \t Total Parcial " << endl;
    cout << "------- \t -------- \t ----------- \t --------------" << endl;
    
    cout << "Alface \t\t R$ "  << kgAlface    << "/Kg \t " << qtdKgAlface    << "Kg \t\t R$ " << totalAlface << endl;
    cout << "Beterraba \t R$ " << kgBeterraba << "/Kg \t " << qtdKgBeterraba << "Kg \t\t R$ " << totalBeterraba << endl;
    cout << "Cenoura \t R$ "   << kgCenoura   << "/Kg \t " << qtdKgCenoura   << "Kg \t\t R$ " << totalCenoura << endl;
    cout << "---------------------------------------------------------------" << endl;
}

int main()
{    
    double qtdKgAlface = 0, qtdKgBeterraba = 0, qtdKgCenoura = 0;
    double totalAlface, totalBeterraba, totalCenoura;

    cout << fixed;
    cout.precision(2);
    cout << "Supermercado ABC" << endl;
    cout << "----------------" << endl;

    cout << "a) Alface\t R$ " << kgAlface << "/Kg"  << endl;
    cout << "b) Beterraba\t R$ " << kgBeterraba << "/Kg"  << endl;
    cout << "c) Cenoura\t R$ " << kgCenoura << "/Kg"  << endl;    

    char ch;

    do{
        totalAlface = qtdKgAlface * kgAlface;
        totalBeterraba = qtdKgBeterraba * kgBeterraba;
        totalCenoura = qtdKgCenoura * kgCenoura;            
        pedidoParcial(qtdKgAlface, qtdKgBeterraba, qtdKgCenoura, 
                        totalAlface, totalBeterraba, totalCenoura);
        cout << "Faca seu pedido usando as letras (a, b, c) e (s) para encerrar: " ;
        cin >> ch;

        switch(ch){
            case 'a':
                cout << "Entre com a quantidade em kg de alface: ";
                cin >> qtdKgAlface;
                break;
            case 'b':
                cout << "Entre com a quantidade em kg de beterraba: ";
                cin >> qtdKgBeterraba;
                break;
            case 'c':
                cout << "Entre com a quantidade em kg de cenoura: ";
                cin >> qtdKgCenoura;
                break;
            case 's':
                
                double total, desconto, custoEntrega, totalKg;
                total = totalAlface + totalBeterraba + totalCenoura;
                totalKg = qtdKgAlface + qtdKgBeterraba + qtdKgCenoura;
                cout << "\n---------------------------------------------------" << endl;
                cout << "Total do pedido: \t " << "R$ " << total << endl;
                
                total > 100 ? desconto = total * 0.05: desconto = 0;
                total > 100 ? total = total * 0.95 : total;
                
                cout << "Descontos: \t\t " << "R$ " << desconto << endl;
                if(totalKg == 0)
                    custoEntrega = 0;

                else if(totalKg < 5)
                    custoEntrega = 3.50;
                
                else if(totalKg >= 5 && totalKg < 20)
                    custoEntrega = 10;
                
                else if(totalKg >= 20){
                    custoEntrega = 8;
                    int acrecimoKg = int(totalKg) - 20;
                    acrecimoKg > 0 ? custoEntrega += acrecimoKg * 0.10 : custoEntrega;
                }

                cout << "Custo de entrega: \t " << "R$ " << custoEntrega << endl;
                cout << "---------------------------------------------------" << endl;
                cout << "Total a pagar: \t\t " << "R$ " << total + custoEntrega << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
                break;

            }            

    }while (ch != 's');
    
    return 0;
}
