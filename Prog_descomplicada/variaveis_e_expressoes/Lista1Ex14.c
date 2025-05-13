/* Leia um ˆ angulo em graus e apresente-o convertido em radianos. A f´ ormula de convers˜ ao
 ´
 e: R =G 180,sendoGo ˆ anguloemgraus e R emradianos e =314.*/

#include<stdio.h>
#include<stdio.h>

int main(){
    float g;
    float r;

    printf("Digite o angulo em graus: \n");
    scanf("%f", &g);

    r = g * 3.14 / 180;

    printf("Convertido: %.2f", r);
}