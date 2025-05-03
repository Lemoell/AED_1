#include<stdio.h>
#include<string.h>


typedef struct{
    char nome[20];
    char curso[20];
    int matri;
}Aluno;

int main(){
    Aluno a[5];
    int i;
        
    for(i=0; i<5; i++){
        printf("Digite o nome: \n");
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        a[i].nome[strcspn(a[i].nome, "\n")] = '\0';

        printf("Nome do curso: \n");
        fgets(a[i].curso, sizeof(a[i].curso), stdin);
        a[i].curso[strcspn(a[i].curso, "\n")] = '\0';


        printf("Digite a matricula: \n");
        scanf("%d", &a[i].matri);
        getchar();
    }
    
    for(i=0; i<5; i++){
        printf("Nome: %s. \n", a[i].nome);
        printf("Curso: %s. \n", a[i].curso);
        printf("Matricula: %d.\n", a[i].matri);
    }
    return 0;
}