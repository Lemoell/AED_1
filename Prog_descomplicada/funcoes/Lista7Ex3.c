#include <stdio.h>

int retorna(int n1){
    if(n1>0){
        return 1;
    }
    else if(n1<0){
        return -1;
    }
    else 
        return 0;
}

int main(){
    int n,valor;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    valor = retorna(n);
    printf("%d. \n", valor);

    return 0;
}