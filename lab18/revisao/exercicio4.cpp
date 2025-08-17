#include <iostream>
using namespace std;

bool StrEqual(const char palavra[], char vet[]){
  
  for (int i = 0; palavra[i]; i++){
    
    if(palavra[i] != vet[i]){
      return false;
    }
  }
  
  return true;
}

int main(){
    
    char palavra[20] = "colega";
    if (StrEqual("colega", palavra))
      cout << "Iguais" << endl;
    else
      cout << "Diferentes" << endl;

    return 0;
}
