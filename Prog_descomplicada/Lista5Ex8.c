#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    int contt = 0;
    int i = 0;

    printf("Digite uma sequencia: \n");
    scanf("%s", str);

    while(str[i] != '\0'){
        if(str[i] == '1'){
            contt++;
        }
        i++;
    }
    printf("Apareceu %d vezes. \n", contt);
    
}