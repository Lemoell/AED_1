/******************************************************************************

Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles, ´
assim como a diferenc¸a existente entre ambos.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, n2, dif;
    
    printf("Digite 2 numeros: \n");
    scanf("%d %d", &n1, &n2);
    
    if(n1 > n2){
        printf("%d maior .\n", n1);
        dif = n1 - n2;
        printf("Diferenca de %d. \n", dif);
    }
    else if(n2 > n1){
        printf("%d maior. \n", n2);
        dif = n2 - n1;
        printf("Diferenca de %d. \n", dif);
    }

    return 0;
}