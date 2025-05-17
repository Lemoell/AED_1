#include <stdio.h>

float maiores(float matriz[4][4]){
    int contt=0;
    for(int i=0; i<4;i++){
       for(int y=0; y<4;y++){
            if(matriz[i][y] > 10){
                contt++;
            }
       }
    }
    return contt;
}

int main(){
    float m[4][4];
    int contador=0;

    printf("Digite os elementos:\n");
    for(int i=0; i<4;i++){
       for(int y=0; y<4;y++){
            printf("elemento %d %d: \n", i, y);
            scanf("%f", &m[i][y]);
       }
    }
    
    contador = maiores(m);
    printf("%d sao maiores que 10. \n", contador);
    return 0;
}