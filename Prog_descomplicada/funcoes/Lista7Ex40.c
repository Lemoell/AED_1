#include <stdio.h>

void vet(int v[10]){
    int cont=0;
    for(int i=0; i<10; i++){
        if(v[i] % 2 == 0){
            cont++;
        }
    }
    printf("TEM %d pares. \n", cont);
}

int main(){
    int vetor[10];

    printf("Digite os 10 valores: \n");
    for(int i =0; i<10; i++){
        scanf("%d", &vetor[i]);
    }

    vet(vetor);

    return 0;
}