#include<stdio.h>
#include<string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
}Data;

typedef struct {
    char compromisso[60];
    Data d;
}Compromisso;
int main(){
    Compromisso c[1];
    int i, M, A;
    
    //ler as informaçoes
    for(i=0; i<1; i++){
        printf("Digite o compromisso: \n");
        fgets(c[i].compromisso, sizeof(c[i].compromisso), stdin);
        c[i].compromisso[strcspn(c[i].compromisso, "\n")] = '\0';

        printf("Digite o dia do compromisso %d: \n", i + 1);
        scanf("%d", &c[i].d.dia);
        getchar();

        printf("Digite o mes do compromisso %d: \n", i + 1);
        scanf("%d", &c[i].d.mes);
        getchar();

        printf("Digite o ano do compromisso %d: \n", i + 1);
        scanf("%d", &c[i].d.ano);
        getchar();
    }

    printf("Digite um mes(em numeros): \n");
    scanf("%d", &M);
    
    do{
        printf("Digite o ano: \n");
        scanf("%d", &A);
        
        for(i=0; i<1; i++){
            if(c[i].d.mes == M && c[i].d.ano == A){
                printf("Compromisso: %s, dia: %d, mes: %d, ano: %d. \n", c[i].compromisso, c[i].d.dia, c[i].d.mes, c[i].d.ano);
            }
            else{
                printf("Nenhum compromisso. \n");
            }
        }
        printf("Digite o mes que deseja ver(0 pra sair): \n");
        scanf("%d", &M);
        getchar();

    }while(M != 0);
}