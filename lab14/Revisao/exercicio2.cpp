#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float torque[10] = {
        2.5, 8.1, 3.4, 9.2, 
        5.7, 9.6, 6.3, 8.0, 
        5.4, 4.9
    };
    float *ptrTorque = &torque[0];
        
    cout << "Torques: ";
    for(int i = 0; i<=8; i++){
        cout << fixed << setprecision(1) << ptrTorque[i] << ", ";
    }
    cout << ptrTorque[9] << endl << endl;
    cout << "Primeiro: "<< *ptrTorque << endl;
    cout << "Ultimo: "<< ptrTorque[9] << endl;
}
