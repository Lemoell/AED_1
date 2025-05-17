#include <stdio.h>

int converte(int h, int m, int s){
    return (h * 3600) + (m * 60) + s;
}

int main(){
   int horas, minutos, segundos, total;

   printf("Digite as horas, minutos e segundos: \n");
   scanf("%d %d %d", &horas, &minutos, &segundos);

   total = converte(horas, minutos, segundos);
   printf("Total em segundos: %d.\n", total);
}