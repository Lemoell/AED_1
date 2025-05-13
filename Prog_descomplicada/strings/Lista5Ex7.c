#include<stdio.h>
#include<string.h>
int main(){
    char nome1[20];
    char nome2[20];
    int i = 0;
    int iguais = 1;

    printf("Digite um nome: \n");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite outro  nome: \n");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';
    

    while(nome1[i] != '\0' || nome2[i] != '\0'){
        if(nome1[i] != nome2[i]){
            iguais = 0;
            break;
        }
        i++;
    }

    if(iguais == 1){
        printf("Iguais \n");
    }
    else
    printf("Diferentes \n");

    return 0;
}