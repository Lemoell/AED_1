/*Leia um numero fornecido pelo usu ´ ario. Se esse n ´ umero for positivo, calcule a raiz ´
quadrada do numero. Se o n ´ umero for negativo, mostre uma mensagem dizendo que o ´
numero ´ e inv ´ alido.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float n1, raiz;
    
    printf("Digite um numero: \n");
    scanf("%f", &n1);
    
    if(n1 >= 0){
        raiz = sqrt(n1);
        printf(" %.1f .", raiz);
    }
    
    else 
        printf("Numero invalido. \n");
        
        return 0;
}