#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 30

typedef struct {
    char letras[MAX];
    int limite;
    int topo;
    int base;
} Pilha;

bool Full ( Pilha *p ) {
    return p -> topo == MAX;
}

bool Empty ( Pilha *p ) {
    return p -> topo == 0;
}

bool Reset ( Pilha *p ) {
    p -> base = 0;
    p -> topo = 0;
    p -> limite = MAX;
    return true;
}

bool PUSH ( Pilha *p, char c ) {
    if ( !Full (p) ) {
        p -> letras[p -> topo++] = c;
        return true;
    }
    else {
        return false;
    }
}

char POP ( Pilha *p ) {
    if ( !Empty (p) ) {
        return p->letras[--p->topo]; 
    }
}

void verifica ( Pilha *p, char palavra[] ) {
    bool palindromo = true;
    int conta = strlen ( palavra );
    for ( int i = 0; i < conta; i++ ) {
        char c = POP (p);
        if ( c != palavra[i] ) {
            printf ( "NAO E PALINDROMO! \n" );
            palindromo = false;
            break;
        }
    }

    if ( palindromo ) {
        printf ( "Sao palindromo! \n" );
    }
        
}

int main () {
    Pilha p;
    char palavra [MAX];
    
    Reset ( &p );

    printf ( "Digite uma palavra pra verificar: \n" );
    fgets ( palavra, sizeof (palavra), stdin );
    palavra [strcspn (palavra, "\n") ] = '\0';

    for ( int i = 0; palavra[i] != '\0'; i++ ) {
        PUSH ( &p, palavra[i] );
    }

    verifica ( &p, palavra );

    return 0;
}