#include <stdio.h>
#include <stdbool.h>

#define MAX 30

typedef struct {
    char dados[MAX];
    int topo;
} Pilha;

void inicializa (Pilha *p) {
    p -> topo = 0; // 0 para indicar que a pilha esta vazia 
}

bool full (Pilha *p) {
    return p -> topo == MAX;
}

bool empty (Pilha *p) {
    return p -> topo == 0;
}

bool push (Pilha *p, char c) {
    if (!full (p) ) {   //verifica se a pilha esta cheia 
        p -> dados [(p -> topo)++] = c; // p aponta para onde vai salvar, incrementa a posição e aponta pro topo e recebe o caracter 
        return true; 
    }
    else {
        return false;
    }
}

char pop (Pilha *p) {
    if (p -> topo == 0) { //se o topo estiver com indice 0 é pq esta vazia
        return '\0';
    }
    return p->dados[--(p->topo)];
}

void Listar (Pilha *p) {
    printf("Listando... \n");
    for (int i = p -> topo -1; i >= 0; i--) {
        printf("%c", p -> dados[i]);
    }
}
int main(){
    char c;
    Pilha p;
    inicializa(&p);

    printf("Digite o texto (termina com ponto final):\n");

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '.') {
            push(&p, c);
        } else {
            // Desempilha (inverte a palavra)
            while (!empty(&p)) {
                putchar(pop(&p));
            }
            putchar(c); // Imprime espaço ou ponto
            if (c == '.') break; // fim do texto
        }
    }

    return 0;
}