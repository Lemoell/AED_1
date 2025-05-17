#include <stdio.h>

void maior(int vetor[10]){
    int m = vetor[0];
    for(int i=1; i<10; i++){
      if(vetor[i] > m){
        m = vetor[i];
      }
    }
    printf("%d e o maior. \n", m);
}

int main(){
    int v[10];
    printf("Digite os 10 valores: \n");
    for(int i =0; i<10; i++){
        scanf("%d", &v[i]);
    }
    maior(v);
}