/*Faca um programa que receba 6 numeros inteiros e mostre:
• Os numeros pares digitados;
• A soma dos numeros pares digitados;
• Os numeros ´ımpares digitados;
• A quantidade de numeros ´ımpares digitados */
#include <stdio.h>

int main(){
    int n1[6];
    int soma  = 0;
    int contt = 0;

    printf("Digite 6 valores: \n");
    for(int i = 0; i < 6; i++){
        scanf("%d", &n1[i]);
    }
    printf("Numeros pares: \n");
    for(int i = 0; i < 6; i++){
        
        if(n1[i] % 2 == 0){
            printf("%d.\n", n1[i]);
            soma += n1[i];
        }
        else 
        contt++;
    }
    printf("Soma dos pares: %d. \n", soma);
    printf("Numeros impares digitados: \n");
    for(int i = 0; i < 6; i++){
        if(n1[i] % 2 != 0){
            printf("%d .\n", n1[i]);
        }
    }
    printf("Quantidade de numeros impares digitados: %d. \n", contt);
}