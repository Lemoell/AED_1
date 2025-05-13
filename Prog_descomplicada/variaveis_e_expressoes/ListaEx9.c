/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
 formula de conversao e: K = C + 27315, sendo C a temperatura em Celsius e K a
 temperatura em Kelvin.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    float c;
    float k;

    printf("Digite temperatura em Celsius: \n");
    scanf("%f", &c);

    k = c + 273.15;

    printf("Temperatura convertida: %.2f .\n", k);
}