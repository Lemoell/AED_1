#include<stdio.h>
#include<string.h>

typedef struct{
    char titulo[30];
    char autor[15];
    int ano;
}Dados;

int main(){
    Dados d[2];
    char busca[30];
    int i, y=0;

    //salva os dados dos 5 livros
    for(i = 0; i < 5; i++){
        printf("Digite o titulo do %d livro: \n", i+1);
        fgets(d[i].titulo, sizeof(d[i].titulo), stdin);
        d[i].titulo[strcspn(d[i].titulo, "\n")] = '\0';

        printf("Digite o nome do autor do %d livro: \n", i+1);
        fgets(d[i].autor, sizeof(d[i].autor), stdin);
        d[i].autor[strcspn(d[i].autor, "\n")] = '\0';

        printf("Digite o ano do %d livro: \n", i +1);
        scanf("%d", &d[i].ano);
        getchar();
    }
    //salva o nome do livro para a busca
    printf("Digite o titulo do livro a ser procurado: \n");
    fgets(busca, sizeof(busca), stdin);
    busca[strcspn(busca, "\n")] = '\0';

    //iniciar a busca

    for(i=0; i < 5; i++){
        if(strcmp(d[i].titulo, busca)==0){
            printf("Titulo: %s, Autor: %s, Ano: %d. \n", d[i].titulo, d[i].autor, d[i].ano);
            y = 1;
        }
    }

    if(y == 0){
        printf("Livro nao encontrado. \n");
    }
}