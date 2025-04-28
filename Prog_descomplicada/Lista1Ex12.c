/*Leia uma distˆ ancia em milhas e apresente-a convertida em quilˆ ometros. A f´ ormula de
 convers˜ ao ´ e: K = 161 M, sendo K a distˆ ancia em quilˆ ometros e M em milhas.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float m;
    float q;

    printf("Digite uma distancia em milhas: \n");
    scanf("%f", &m);

    q = 1.61 * m;

    printf("Distancia convertida: %.2f \n", q);
}