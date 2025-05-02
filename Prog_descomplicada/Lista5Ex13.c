#include <stdio.h>
#include <string.h>

int main(){
    char frase[50];
    int i = 0;
    int cont = 0;
    printf("Digite uma frase: \n");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    while(frase[i] != '\0'){
        if(frase[i] == ' '){
            cont++;
        }
        i++;
    }
    printf("Espacos em branco: %d.\n", cont);

    return 0;
}