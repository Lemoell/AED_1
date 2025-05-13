/******************************************************************************
Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
 seguintes categorias:

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2, n3, n4;
    float res;
    
    printf("Digite 3 numeros: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    printf("Digite qual operacao deseja fazer: \n");
    printf("1 - Geometria.");
    printf("2 - Ponderada.");
    printf("3 - Harmonica.");
    printf("4 - Aritmetica.");
    scanf("%d", &n4);
    switch(n4){
        case 1:
            res = pow((n1 * n2 * n3), 1.0/3.0);
            printf("%.2f", res);
            return 0;
        break;
        
        case 2:
            res = (n1 + 2 * n2 + 3 * n3)/ 6;
            printf("%.2f", res);
            return 0;
        break;
        
        case 3:
            res = 1/ ((1/n1) + (1/n2) + (1/n3));
            printf("%.2f", res);
            return 0;
        break;
        
        case 4:
            res = (n1 + n2 + n3)/ 3;
            printf("%.2f", res);
            return 0;
        break;
    }
    return 1;
    
}