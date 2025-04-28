/*Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
 A f´ ormula de convers˜ ao ´ e: C = 50 (F 320) 90, sendo C a temperatura em Celsius
 e F atemperatura em Fahrenheit.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    float c;
    float f;

    printf("Digite a temperatura em Fahrenheit:\n");
    scanf("%f", &f);
    c = 5.0 * (f - 32.0) /9.0;

    printf("Temperatura para graus Celsius: %.2f .\n", c);
}