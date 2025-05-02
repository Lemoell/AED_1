#include<stdio.h>
#include<string.h>

int main(){
    char S[50];
    char C;
    int I;

    printf("Digite algo: \n");
    fgets(S, sizeof(S), stdin);
    S[strcspn(S, "\n")] = '\0';

    printf("Digite o caracter a ser procurado: \n");
    scanf("%c", &C);

    printf("Digite a posicao que deseja iniciar a busca: \n");
    scanf("%d", &I);
    
    while(S[I] != '\0'){
        if(S[I] == C){
            printf("indice do caracter %d.", I);
            return 0;
        }
        I++;
    }
    printf("Caracter nao encontrado! \n");

    return 0;
}