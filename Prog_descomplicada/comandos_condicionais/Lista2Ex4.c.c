/******************************************************************************

Fac¸a um programa que leia um numero e, caso ele seja positivo, calcule e mostre: ´
• O numero digitado ao quadrado ´
• A raiz quadrada do numero digitado .

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, raiz, resu;
    
    printf("Digite um numero: \n");
    scanf("%f", &n1);
    if(n1>0){
        resu = n1 * n1;
        raiz = sqrt(n1);
        
        printf("Numero ao quadrado: %.1f .\n", resu);
        printf("Raiz: %.1f .", raiz);
        return 0;
    }
    else 

    return 0;
}