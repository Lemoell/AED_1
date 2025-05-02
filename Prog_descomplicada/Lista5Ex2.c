/*Crie um programa que calcula o comprimento de uma string sem strlen*/ 

#include<stdio.h>

int main(){
    char frase[20];
    int i =0;
    printf("Digite uma string: \n");
    fgets(frase, sizeof(frase), stdin);

    while(frase[i] != '\0' && frase[i] != '\n'){
        i++;
    }

    printf("Tamanho da frase: %d. \n", i - 1);
}