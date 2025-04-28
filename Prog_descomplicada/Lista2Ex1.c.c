/******************************************************************************
Fac¸a um programa que receba dois numeros e mostre qual deles ´ e o maior
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    printf("Digite dois valores: \n");
    scanf("%f %f", &n1 ,&n2);
    
    if(n1 > n2){
        printf("%.1f e maior. \n", n1);
    }
    else 
        printf("%.1f e maior. \n", n2);

    return 0;