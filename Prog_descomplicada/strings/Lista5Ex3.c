#include<stdio.h>

int main(){
    char nome[20];
    int i = 0;
    printf("Digite seu nome: \n");
    fgets(nome, sizeof(nome), stdin);

    if(nome[i] == 'a' || nome[i] == 'A'){
        printf("Nome: %s", nome);
        return 0;
    }
    return 0;
}