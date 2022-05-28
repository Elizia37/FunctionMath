#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>
#include "FunctionsMath.h"

int main()
{

    setlocale(LC_ALL,"");
    //Variaveis
    int resFatorial;
    float celsius;
    float areaTriangulo;
    float areaDaEsfera;
    float areadoVolume;



    //Chamada das funções
    //msg();
    resFatorial = fatorial(5);
    printf("\nO fatorial de 5 é:%i",resFatorial);
    celsius = converteFahrenheitPraCelsius(100);
    printf("\nO valor em graus censius é: %.2f", celsius);
    areaTriangulo = areaTriaguloHeron(40,31,50);
    areaDaEsfera = areaEsfera(5);
    areadoVolume = volumeEsfera(5);
    ParOuImpar(3);
    equacaoSegundoGrau(1,2,-3);

}
