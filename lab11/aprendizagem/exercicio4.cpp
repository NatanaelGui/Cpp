#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
        
    cout << "Quais suas datas comemorativas preferidas? ";
    string data1, data2, data3;
    getline(cin, data1);     
    getline(cin, data2); 
    getline(cin, data3);
    
    char natal[6] = "Natal";
    bool isNatal = false;
    if(data1 == natal || data2 == natal || data3 == natal){
        isNatal = true;
    }
    
    data1.append(", "); data2.append(" e ");
    data1 += data2 + data3;
    
    char vetCat[80] = "";
    strcpy(vetCat, data1.c_str());
    
    cout << vetCat << " sao belas festas.\n";
    if(isNatal){
        cout <<"O Natal tambem e uma das minhas datas preferidas!\n";
    }

}