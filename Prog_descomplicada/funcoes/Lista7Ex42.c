#include <stdio.h>
#define TAM 10

void mediav(int vetor[TAM]){
    float media;
    float soma;
    for(int i=0; i<TAM; i++){
        soma+=vetor[i];
    }
    media = soma /10;
    printf("Media: %.2f.", media);
}

int main(){
    int v[TAM];
    printf("Digite os valores: \n");
    for(int i=0; i<TAM; i++){
        scanf("%d", &v[i]);
    }
    mediav(v);
}