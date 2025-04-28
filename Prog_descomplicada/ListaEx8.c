/*Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
 f ´ ormula de convers˜ ao ´ e: C = K 27315, sendo C a temperatura em Celsius e K a
 temperatura em Kelvin.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    float c;
    float k;

    printf("Digite a temperatura em Kelvin: \n");
    scanf("%f", &k);

    c = k - 273.15;

    printf("Temperatura convertida: %.2f .\n", c);
}