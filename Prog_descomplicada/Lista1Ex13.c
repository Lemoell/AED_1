/*Leia uma distˆ ancia em quilˆ ometros e apresente-a convertida em milhas. A f´ ormula de
 convers˜ ao ´ e: M = K
 161, sendo K a distˆ ancia em quilˆ ometros e M em milhas.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    float m;
    float q;

    printf("Digite uma distancia em quilometros: \n");
    scanf("%f", &q);

    m = q / 1.61;

    printf("Distancia convertida: %.2f \n", m);
}