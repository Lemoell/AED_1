/*Leia uma velocidade em km/h (quilˆ ometros por hora) e apresente-a convertida em m/s
 (metros por segundo). A f´ ormula de convers˜ ao ´ e: M = K36, sendo K a velocidade em
 km/h e M emm/s.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    float k;
    float m;

    printf("Digite uma velocidade(km/h): \n");
    scanf("%f", &k);

    m = k/3.6;
    printf("Velocidade convertida: %.2f .", m);
}