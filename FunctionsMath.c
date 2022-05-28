#include "FunctionsMath.h"

void msg()
{
    printf("Hello world!\n");
}
int fatorial(int x)
{
    int resultado;
    if (x==0)
    {
        resultado=1;
    }
    else
    {
        resultado= x*fatorial(x-1);
    }
    return resultado;
}
float converteFahrenheitPraCelsius(float f)
{
    float c;
    c=(5*f-160)/9;

    return c;
}

float areaTriaguloHeron(float l1,float l2,float l3) //l = lado do triangulo; p = perimetro
{
    float p, area;

    p =(l1+l2+l3)/2;
    if(p <l1|| p<l2 || p<l2)
    {
        printf("Perimetro não pode ser menor que um dos lados");
    }
    else
    {
        area= sqrt(p*(p-l1)*(p-l2)*(p-l3));
        printf ("\nA area do triangulo é: %.2f", area);

    }
    return area;
}
float areaEsfera(float raio)
{
    float area;
    area=4*PI*(pow(raio,2));

    printf("\nArea da esfera: %f", area);
    return area;
}
float volumeEsfera(float raio)
{
    float vol;
    vol=(4*PI*(pow(raio,3)))/3;

    printf("\nArea do volume: %f", vol);
    return vol;
}
void ParOuImpar(int valor)
{
    if(valor%2==0)
        printf("\nO numero %i é par!", valor);
    else
        printf("\nO numero %i é impar!", valor);
}
void equacaoSegundoGrau(float a,float b,float c)
{
    float raiz1,raiz2,delta;
    delta = (pow(b,2))-(4*a*c);

    if(delta > 0)
    {
        raiz1 = (-b + sqrt(delta))/2*a;
        raiz2 = (-b - sqrt(delta))/2*a;
        printf("\nDelta é maior que zero, tem duas soluções reais - Raiz1: %f e Raiz2: %f",raiz1,raiz2);
    }
    if(delta == 0)
    {
        printf("Completar");
    }
    if(delta < 0)
    {
        printf("Completar2");
    }

}
