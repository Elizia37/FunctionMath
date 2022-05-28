#ifndef FUNCTIONSMATH_H_INCLUDED
#define FUNCTIONSMATH_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

void msg();
int fatorial(int x);
float converteFahrenheitPraCelsius(float f);
float areaTriaguloHeron(float l1,float l2,float l3);
float areaEsfera(float raio);
float volumeEsfera(float raio);
void ParOuImpar(int valor);
void equacaoSegundoGrau(float a,float b,float c);

#endif // FUNCTIONSMATH_H_INCLUDED
