#include<stdio.h>
#include<string.h>

int main(){
    char nome[20];
    float valor;
    float desconto;

    printf("Digite o nome do produto: \n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite o preco do produto: \n");
    scanf("%f", &valor);

    desconto = valor * 0.90;

    printf("Mercadoria: %s , Valor total: %.2f, Valor com desconto: %.2f", nome, valor, desconto);

    return 0;
}