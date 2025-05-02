#include<stdio.h>

int main(){
    char nome[20];

    printf("escreva algo: \n");
    fgets(nome, sizeof(nome), stdin);

    printf("%s", nome);
}