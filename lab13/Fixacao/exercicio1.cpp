    #include<iostream>
    #include<cstring>
    #include<iomanip>
    using namespace std;

    union CorCarro {
        unsigned short numero;
        char codigo[5];
        char nome[8];
    };

    struct Carro {
        char nomeModelo[20];
        unsigned short ano;
        CorCarro cor;
        double preco;
    };

    void exibirVetCarro(Carro vetCarro[]);
    main()
    {        
        CorCarro azul, preto;
        strcpy(azul.nome, "Azul");
        strcpy(preto.nome, "Preto");

        

        Carro vetCarro[10] = {
            {"Vectra", 2009, azul, 58.000},
            {"Polo", 2008, preto, 45.000}
        };
        cout.precision(6);
        cout << "Entre com o nome do modelo do carro, ano, cor e preco: ";
         
        cin >> vetCarro[2].nomeModelo >> vetCarro[2].ano >> vetCarro[2].cor.nome >> vetCarro[2].preco;
        exibirVetCarro(vetCarro);
    }

    void exibirVetCarro(Carro vetCarro[]){
        cout << fixed;
        cout << "\n=============================";
        cout << "\nNome: " << vetCarro[0].nomeModelo 
             << "\nAno: " << vetCarro[0].ano 
             << "\nCor: "<< vetCarro[0].cor.nome;
        cout << setprecision(3) << "\nPreco: " << vetCarro[0].preco;
        cout << "\n=============================\n";
        
        cout << "\nNome: " << vetCarro[1].nomeModelo 
             << "\nAno: " << vetCarro[1].ano 
             << "\nCor: "<< vetCarro[1].cor.nome;
        cout << setprecision(3) << "\nPreco: " << vetCarro[1].preco;
        cout << "\n=============================\n";

        cout << "\nNome: " << vetCarro[2].nomeModelo 
             << "\nAno: " << vetCarro[2].ano 
             << "\nCor: "<< vetCarro[2].cor.nome;
        cout << setprecision(3) << "\nPreco: " << vetCarro[2].preco;
        cout << "\n=============================\n";
    }