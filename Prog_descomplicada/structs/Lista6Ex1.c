#include<stdio.h>

typedef struct{
    int hora;
    int min;
    int seg;
}Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    Horario horario;
    Data data;
    char descricao[50];
}Compromisso;
int main(){
    Compromisso c;
    
    c.data.dia = 19;
    c.data.mes = 6;
    c.data.ano = 2025;

    c.horario.hora = 17;
    c.horario.min = 30;
    c.horario.seg = 0;

    snprintf(c.descricao, 20, "Reuniao dos pais. \n");

    printf("Compromisso:\n");
    printf("Data: %02d/%02d/%d\n", c.data.dia, c.data.mes, c.data.ano);
    printf("Hora: %02d:%02d:%02d\n", c.horario.hora, c.horario.min, c.horario.seg);
    printf("Descrição: %s\n", c.descricao);

    return 0;
}