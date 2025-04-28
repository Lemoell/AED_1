/* Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
 (quilˆ ometros por hora). A f´ ormula de convers˜ ao ´ e: K = M 36, sendo K a velocidade
 em km/h e M emm/s.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float k;
    float m;

    printf("Digite uma velocidade(em m/s): \n");
    scanf("%f", &m);

    k = m * 3.6;
    printf("Velocidade convertida: %.2f .", k);
}