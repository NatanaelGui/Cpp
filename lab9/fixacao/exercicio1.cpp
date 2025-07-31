#include <iostream>

main(){
    double x1, x2;
    int result;

    std::cout << "Digite o valor x1: ";
    std::cin >> x1;

    std::cout << "Digite o valor x2: ";
    std::cin >> x2;

    result = int(x1) + int(x2);

    std::cout << "A adição inteira dos valores é " << result << "." << '\n';
}