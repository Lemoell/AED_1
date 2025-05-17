#include <stdio.h>

float soma(float matriz[7][6], int N){
    float somar =0;
        for(int j=0; j<6; j++){
            somar += matriz[N][j];
    }
    return somar;
}

int main(){
    float m[7][6];
    float total;
    int n;
    printf("Numero da linha: \n");
    scanf("%d", &n);

    printf("Preencha a matriz: \n");
    for(int i=0; i<7; i++){
        for(int j=0; j<6; j++){
            printf("Elemento %d %d \n", i, j);
            scanf("%f", &m[i][j]);
        }
    }
    n += -1; 
    total = soma(m, n);
    printf("Valor da soma: %.2f. \n", total);
}