//Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
//Af´ ormula de convers˜ ao ´ e: F = C (9050)+320, sendoF atemperaturaemFahrenheit
//e C atemperatura em Celsius.

#include<stdio.h>
#include<stdlib.h>

int main(){
    float c;
    float f;

    printf("Digite a temperatura em graus Celsius: \n");
    scanf("%f", &c);
    f = c*(9.0/5.0)+32.0;
    printf("Temperatura em Fahrenheit: %.2f \n", f);
}