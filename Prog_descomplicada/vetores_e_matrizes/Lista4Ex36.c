#include <stdio.h>

int main(){
    float vetor[10];
    int i, j;
    float troca;
    for(i = 0; i < 10; i++){
        printf("Digite o %d numero: \n", i + 1);
        scanf("%f", &vetor[i]);
    }
    
    for(i = 0; i <9; i++){
        for(j=0; j < 9; j++){
            if(vetor[j] > vetor[j + 1]){
                troca = vetor[j + 1];
                vetor[j + 1] = vetor[j];
                vetor[j] = troca;
            }
        }
    }

    printf("vetor organizado: \n");
    
    for(i=0; i<10; i++){
        printf("%.2f. \n", vetor[i]);
    }
}