/******************************************************************************

Fac¸a um programa que receba um numero inteiro e verifique se este n ´ umero ´ e par ou ´
´ımpar

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1;
    
    printf("Digite um numero: \n");
    scanf("%d", &n1);
    
    if(n1 % 2 == 0){
        printf("Par .");
        return 0;
    }
    else 
    
    printf("Impar .");

    return 0;
}