#include <stdio.h>
#include <string.h>
int main(){
    char frase[20];
    int i = 0;
    printf("Digite uma frase: \n");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")]='\0';

    for(i = strlen(frase) - 1; i >= 0; i--){
        putchar(frase[i]);
    }
}