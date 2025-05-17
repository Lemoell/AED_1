#include <stdio.h>

void data(int dia, int mes, int ano){
    char dat[12][10]={
        "janeiro", "fevereiro", "marco", "abril", "maio","junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };
    
    if(mes < 1 || mes > 12){
        printf("Mes invalido!!");
        return;
    }

    printf("%d de %s de %d. \n", dia, dat[mes - 1], ano);
}

int main(){
    int dia, mes, ano;
    
    printf("Digite o dia: \n");
    scanf("%d", &dia);

    printf("Digite o mes: \n");
    scanf("%d", &mes);

    printf("Digite o ano: \n");
    scanf("%d", &ano);

    data(dia, mes, ano);
}