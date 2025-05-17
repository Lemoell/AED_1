#include <stdio.h>
#include <math.h>

float calcular(float r){
    return (4.0/3.0) * 3.14 * pow(r, 3); 
}

int main(){
    float r, valor;

    printf("Digite um valor: \n");
    scanf("%f", &r);

    valor = calcular(r);

    printf("%.2f. \n", valor);

    return 0;
}