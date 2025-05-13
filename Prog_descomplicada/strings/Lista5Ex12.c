#include <stdio.h>
#include <string.h>
int main(){
    char frase[20];
    char cara;
    int i = 0;
    int contt = 0;
    printf("Digite uma frase: \n");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")]='\0';

    while(frase[i] != '\0'){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
            contt++;
        }
        i++;
    }
    printf("Tem %d vogais. \n", contt);

    printf("Digite um caracter: \n");
    scanf("%c", &cara);
    i = 0;
    while(frase[i] != '\0'){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
            frase[i] = cara;
        }
        i++;
    }
    printf("%s .", frase);

    return 0;
}