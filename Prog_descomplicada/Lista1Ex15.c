/*Leia um ˆ angulo em radianos e apresente-o convertido em graus. A f´ ormula de convers˜ ao
 ´
 e: G =R 180 ,sendoGo ˆ anguloemgraus e R emradianos e =314.*/
#include<stdio.h>
#include<stdio.h>

int main(){
    float g;
    float r;

    printf("Digite o angulo em graus: \n");
    scanf("%f", &r);

    g = r * 180 / 3.14;

    printf("Convertido: %.2f", g);
}