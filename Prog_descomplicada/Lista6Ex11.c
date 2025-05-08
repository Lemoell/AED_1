#include<stdio.h>
#include<string.h>
#define TAM 10

typedef struct{
    char nome[20];
    int matricula;
    float media;
}Alunos;

int main(){
    Alunos a[TAM];
    Alunos apro[TAM];
    Alunos repro[TAM];
    int cont_ap = 0, cont_repr = 0;
    int i;
    for(i = 0; i < TAM; i++){
        printf("Digite o nome: \n");
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        a[i].nome[strcspn(a[i].nome, "\n")] = '\0';

        printf("Numero de matricula: \n");
        scanf("%d", &a[i].matricula);
        getchar();

        printf("Media final: \n");
        scanf("%f", &a[i].media);
        getchar();

        if(a[i].media > 5.00){
            apro[cont_ap++] = a[i];
        } else {
            repro[cont_repr++] = a[i];
        }
    }
    
    printf("Aprovados: \n");
    for(i = 0; i < cont_ap; i++){
        printf("Nome: %s | matricula: %d | Media: %.2f. \n", apro[i].nome, apro[i].matricula, apro[i].media);
    }
    printf("Reprovados: \n");
    for(i = 0; i < cont_repr; i++){
        printf("Nome: %s | matricula: %d | Media: %.2f. \n", repro[i].nome, repro[i].matricula, repro[i].media);
    }
    return 0;
}