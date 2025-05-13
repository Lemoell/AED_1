#include<stdio.h>
#include<string.h>

typedef struct{
    char nome[10];
    int idade;
    char end[20];
}Dados;

int main(){
    Dados d;

    printf("Digite o nome: \n");
    fgets(d.nome, sizeof(d.nome), stdin);
    d.nome[strcspn(d.nome, "\n")] = '\0';

    printf("Qual a idade: \n");
    scanf("%d", &d.idade);
    getchar();

    printf("Digite o endereco: \n");
    fgets(d.end, sizeof(d.end), stdin);
    d.end[strcspn(d.end, "\n")] = '\0';


    printf("Nome: %s, Idade: %d.", d.nome, d.idade);
    printf(" Endereco: %s.", d.end);

    return 0;
}