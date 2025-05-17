#include <stdio.h>
#include <math.h>

float hipo(float a, float b){
    return sqrt(a * a + b * b);
}

int main(){
    float A, B, resu;
    printf("Digite dois valores: \n");
    scanf("%f %f", &A, &B);

    resu = hipo(A, B);
    printf("%.2f \n", resu);
    
    return 0;
}