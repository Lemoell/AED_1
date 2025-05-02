#include<stdio.h>

int main(){
    char nome[20];
    int i = 0;

    printf("Digite seu nome: \n");
    fgets(nome, sizeof(nome), stdin);

    for(i = 0; i <4; i++){
        printf("%c", nome[i]);
    }
    return 0;
}