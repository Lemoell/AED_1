/******************************************************************************

Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contr ´ ario, ´
imprima o numero ao quadrado.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, raiz, result;
    
    printf("Digite um numero : \n");
    scanf("%f", &n1);
    
    if(n1 >= 0){
        raiz = sqrt(n1);
        printf("%.1f .", raiz);
        return 0;
    }
    
    else 
        result = n1 * n1;
        printf(" %.1f", result);

    return 0;
}