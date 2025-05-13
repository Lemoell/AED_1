#include<stdio.h>

int main(){
    float matriz[3][3];
    float soma = 0;
    int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Elemento [%d][%d]: \n", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<i; j++){
            soma += matriz[i][j];
        }
    }
    return 0;
}