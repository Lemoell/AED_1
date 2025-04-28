#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2, n3;
    int soma;
    printf("Digite 3 valores inteiros: \n");
    scanf("%d %d %d", &n1 ,&n2, &n3);
    soma = n1 + n2 + n3;
    printf("Soma dos numeros: %d \n", soma);
}