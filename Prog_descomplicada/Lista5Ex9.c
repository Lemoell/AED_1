#include <stdio.h>
#include <string.h>
int main(){
    char frase[20];
    int i = 0;

    printf("Digite uma sequencia: \n");
    scanf("%s", frase);

    while(frase[i] != '\0'){
        if(frase[i] == '0'){
            frase[i] = '1';
        }
        i++;
    }
    printf("%s", frase);
}