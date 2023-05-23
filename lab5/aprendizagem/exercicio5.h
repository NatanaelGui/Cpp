#include <cmath>
#include "prototipoE5.h"

float moduloVetor(float x, float y){
    
   return  sqrt(pow(x, 2) + pow(y, 2));
}

float anguloVetor(float x, float y){
    
   return  (atan2(y, x) * 180) / M_PI;
}
