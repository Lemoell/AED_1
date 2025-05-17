#include <stdio.h>
#include <string.h>

int dobro(int x){
    return x * 2;
}

int main(){
    int n1, re;
    printf("Digite um num: \n");
    scanf("%d", &n1);

    re = dobro(n1);
    printf("%d. \n", re);
}