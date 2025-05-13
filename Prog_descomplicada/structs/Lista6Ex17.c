#include<stdio.h>
#include<string.h>

typedef struct {
    char nome[15];
    float potencia;
    float ativo;
}Casa;

int main(){
    Casa e[5];
    int i;
    float t;

    for(i= 0; i < 5; i++){
        printf("Digite o nome do %d eletrodomestico: \n", i + 1);
        fgets(e[i].nome, sizeof(e[i].nome), stdin);
        e[i].nome[strcspn(e[i].nome, "\n")] = '\0';

        printf("Digite a potencia do %d eletro domestico: \n", i + 1);
        scanf("%f", &e[i].potencia);
        getchar();

        printf("Digite o tempo do eletrodomestico ativo: \n", i + 1);
        scanf("%f", &e[i].ativo);
        getchar();
    }

    printf("Digite um tempo em dias: \n");
    scanf("%f", &t);

    float consumototal=0.0;
    float consumo[5];

    for(i=0; i<5; i++){
        consumo[i] = e[i].ativo * e[i].potencia * t;
        consumototal+=consumo[i];
    }

    printf("\nConsumo total da casa em %.1f dias: %.2f kWh\n", t, consumototal);
    printf("\nConsumo relativo de cada eletrodomestico:\n");
    
    for (i = 0; i < 5; i++) {
        float percentual = (consumo[i] / consumototal) * 100.0;
        printf("%s: %.2f kWh (%.2f%%)\n", e[i].nome, consumo[i], percentual);
    }

    
    return 0;
}