#ifndef RUMUS_H_INCLUDED
#define RUMUS_H_INCLUDED
#include <iostream>
#include <stdlib.h>
using namespace std;

const float PHI = 3.14;

float keliling(float r){
    return 2*PHI*r;
}
float luas(float r){
    return PHI*r*r;
}
float permukaanbola(float r){
    return 4*PHI*r*r;
}
float volumebola(float r){
    return float(4/3)*(PHI*r*r*r);
}
float permukaantabung(float r, float t){
    return ((2*(PHI*r*r))+ ((2*PHI*r)*t));
}
float selimuttabung(float r, float t){
    return (2*PHI*r)*t;
}
float volumetabung(float r, float t){
    return PHI*r*r*t;
}

#endif // RUMUS_H_INCLUDED
