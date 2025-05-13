/******************************************************************************

Chico tem 1.50 metro e cresce 2 centımetros por ano, enquanto Ze tem 1.10 metros e
cresce 3 centımetros por ano. Escreva um programa que calcule e imprima quantos anos
serao necessarios para que Ze seja maior que Chico.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float ze = 1.10;
    float chico = 1.50;
    int contt = 0;
    while(ze <= chico){
        ze += 0.03;
        chico += 0.02;
        contt++;
    }
    
    printf("Sao necessarios %d anos.", contt);

    return 0;
}