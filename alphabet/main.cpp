#include<iostream>

int main (void){
    for (char ch='a'; ch<='z'; ++ch){
        std::cout << ch++ << char(ch-32);
    }
    std::cout << std::endl;
    return 0;
}
