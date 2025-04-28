/******************************************************************************
Leia a distancia em Km e a quantidade de litros de gasolina consumidos por um carro
 em um percurso, calcule o consumo em Kml e escreva uma mensagem de acordo com
 a tabela abaixo:

*******************************************************************************/

#include <stdio.h>

int main()
{
    float km, li;
    float media;
    
    printf("Digite o numero de kms: \n");
    scanf("%f", &km);
    
    printf("Digite o numero de litros: \n");
    scanf("%f", &li);
    
    if(li != 0){
        media = km / li;
    }
    printf("%.2f media de km por litro. \n", media);
    
    if(media < 8){
        printf("Venda o carro!");
        return 0;
    }
    else if(media > 7 && media < 15){
        printf("Economico!");
        return 0;
    }    
    else 
        printf("Super economico!");
        return 0;
   
    
}