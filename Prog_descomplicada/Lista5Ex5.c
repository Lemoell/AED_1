#include<stdio.h>
#include<string.h>

int main(){
    char nome[20];
    int i = 0;

    printf("Digite um nome: \n");
    fgets(nome, sizeof(nome), stdin);

    while(nome[i] != '\0' && nome[i] != '\n'){
        i++;
    }
    printf("O nome tem %d letras. \n", i - 1);

    return 0;
}