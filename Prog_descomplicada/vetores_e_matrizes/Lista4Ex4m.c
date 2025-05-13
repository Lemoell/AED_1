#include<stdio.h>

int main(){
    float matriz[3][3];
    int i, j;
    float soma =0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Elemento [%d][%d]", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=i + 1; j<3; j++){
            soma += matriz[i][j];
        }
    }

    printf("Soma : %.2f", soma);
}