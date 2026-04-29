#include <iostream>
using namespace std;

double tempoVolta(const double & tempo){

    static double tempoTotal = 0;
    
    return tempoTotal += tempo;
}

int main()
{    

    double tempoTotal = 0;
    
    cout << "Volta: ";
    while(cin >> tempoTotal)
    {
        
        cout << "Tempo total: " << tempoVolta(tempoTotal) << " segs." << endl;
        cout << "Volta: ";
    }
    
    return 0;
}
