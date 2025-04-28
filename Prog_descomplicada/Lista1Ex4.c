#include<stdio.h>
#include<stdlib.h>

int main(){
    float num;
    float resultado;
    printf("Digite um numero real: \n");
    scanf("%f", &num);
    resultado = num * num;

    printf("Resultado: %.2f", resultado);
}