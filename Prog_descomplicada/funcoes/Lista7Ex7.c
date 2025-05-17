#include <stdio.h>

float converte(float c){
    return c * (9.0/5.0) + 32.0;
}

int main(){
    float cel;
    printf("Digite a temperatura para converter: \n");
    scanf("%f", &cel);

    float f = converte(cel);
    printf("Convertida: %.2f. \n", f);
}