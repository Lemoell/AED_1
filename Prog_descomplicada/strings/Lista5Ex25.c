#include<stdio.h>
#include<string.h>

int main(){
    char frase1[20];
    char frase2[20];
    int i = 0;

    printf("Digite uma palavra: \n");
    fgets(frase1, sizeof(frase1), stdin);
    frase1[strcspn(frase1, "\n")] = '\0';

    printf("Digite outra palavra: \n");
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0';
 
    while(frase1[i] != '\0' && frase2[i] != '\0'){
        if(frase1[i] < frase2[i]){
            printf("Primeira palavra vem primeiro. \n");
            return 0;
        }
        else if(frase1[i] > frase2[i]){
            printf("Segunda palavra vem antes. \n");
            return 0;
        }
        i++;
    }

    if(strlen(frase1) < strlen(frase2)){
        printf("Primeira vem antes. \n");
        return 0;
    }
    else if(strlen(frase1) > strlen(frase2)){
        printf("Segunda vem antes. \n");
        return 0;
    }
    else 
    printf("Sao iguais. \n");

    return 0;
}