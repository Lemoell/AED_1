#include <stdio.h>
#include <string.h>

void mudar(char c){
    if(c >= 'a' && c <= 'z'){
        c = c - 32;
    }
    printf("%c. \n", c);
}

int main(){
    char d;
    printf("Digite um caracter: \n");
    scanf("%c", &d);
    mudar(d);
}