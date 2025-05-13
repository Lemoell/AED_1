#include<stdio.h>
#include<string.h>
#define TAM 2

typedef struct{
    char nome[20];
    float n1;
    float n2;
    float n3;
}Alunos;

int main(){
    Alunos a[TAM];
    float media_atual;
    float maior;
    float menor;
    float n1_maior;
    int i, y, cont=0;
    printf("Digite os dados dos alunos: \n");

    for(i=0; i<TAM; i++){
        printf("Nome do %d aluno: \n", i + 1);
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        a[i].nome[strcspn(a[i].nome, "\n")] = '\0';

        printf("Nota 1: \n");
        scanf("%f", &a[i].n1);
        getchar();

        printf("Nota 2: \n");
        scanf("%f", &a[i].n2);
        getchar();

        printf("Nota 3: \n");
        scanf("%f", &a[i].n3);
        getchar();
    }
    //procurar a maior nota
    n1_maior = a[0].n1;
    for(i=1; i<TAM; i++){
        if(a[i].n1 > n1_maior){
            n1_maior = a[i].n1;
            cont = i;
        }
    }
    printf("Maior nota da prova 1: %s.\n %.2f.\n", a[cont].nome, a[cont].n1);
    
    cont = 0;

    //aluno com a maior e menor  media
    maior = menor = (a[0].n1 + a[0].n2 + a[0].n3) / 3;
    for(i=1; i<TAM; i++){
        media_atual = (a[i].n1 + a[i].n2 + a[i].n3) / 3;
        if(media_atual > maior){
            maior = media_atual;
            cont = i;
        }
        if(media_atual < menor){
            menor = media_atual;
            y = i;
        }
    }

    printf("Aluno %s, Maior media: %.2f \n", a[cont].nome, maior);
    printf("Aluno %s, Menor media: %.2f \n", a[y].nome, menor);
    
    return 0;
}