/******************************************************************************

Ler uma sequencia de numeros inteiros e determinar se eles sao pares ou nao. Devera
ser informado o numero de dados lidos e numero de valores pares. O processo termina
quando for digitado o numero 1000

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    int pares = 0;
    int qnt = 0;
    do{
        printf("Digite um valor: \n");
        scanf("%d", &num);
        qnt++;
        if(num % 2 == 0){
            pares++;
        }
    }while(num != 1000);
    
    printf("Quantidade de dados lidos: %d .\n", qnt - 1);
    printf("Quantidade de numeros pares: %d .\n", pares - 1);
    return 0;
}