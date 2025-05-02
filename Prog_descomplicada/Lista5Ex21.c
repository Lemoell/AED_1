#include <stdio.h>
#include <string.h>

int main(){
    
    char frase1[30];
    char frase2[30];
    int i;
    
    printf("Digite uma frase: \n");
    fgets(frase1, sizeof(frase1), stdin);
    frase1[strcspn(frase1, "\n")] = '\0';
    int cont1 = strlen(frase1);

    printf("Digite uma frase: \n");
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0';
    int cont2 = strlen(frase2);
    

    for(i = cont1 - 1; i >= 0; i--){
        if(frase1[i] == 'A' || frase1[i] == 'a'){
            printf("*");
        }
        else
        printf("%c", frase1[i]);
    }

    printf("\n");

    for(i = cont2 - 1; i >= 0; i--){
        if(frase2[i] == 'A' || frase2[i] == 'a'){
            printf("*");
        }
        else
        printf("%c", frase2[i]);
    }

    return 0;
}