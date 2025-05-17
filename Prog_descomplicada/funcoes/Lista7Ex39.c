#include <stdio.h>

void troque(float *A, float *B){
    float tro= *A;
    *A = *B;
    *B = tro;
}

int main(){
    float a, b;

    printf("Digite o primeiro valor: \n");
    scanf("%f", &a);

    printf("Digite o segundo valor: \n");
    scanf("%f", &b);

    troque(&a, &b);
    printf("%.2f, %.2f \n", a , b);
}