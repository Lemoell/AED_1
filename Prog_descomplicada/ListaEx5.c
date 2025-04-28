//Leia um n´umero real e imprima a quinta parte deste n´ umero.
#include<stdio.h>
#include<stdlib.h>

int main(){
    float num;
    float result;
    printf("Digite um numero real: \n");
    scanf("%f", &num);

    result = num / 5.00;

    printf("A quinta parte do numero: %.2f .\n", result);
}