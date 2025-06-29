int maximumGain (char *s, int x, int y) {
    
    /*
    ====================================================
    Iniciando alocando uma pilha com o tamanho da string
    ====================================================
    */  
     
    int n = strlen (s); 
    int resul = 0;
    char *pilha = malloc (n);
    int top = 0;
    int inverter = 0;

    /*
    =======================================
    Inverte caso a condição seja verdadeira
    =======================================
    */

    if (y > x) {
        inverter = 1;
        int temp = x;
        x = y;
        y = temp;
        for (int i = 0, j = n - 1; i < j; ++i, --j) {
            char suport = s[i];
            s[i] = s[j];
            s[j] = suport;
        }
    }

    /*
    ================================================
    Percorre a Pilha pra ver se tem a sequência "ab"
    ================================================
    */

    for (int i = 0; s[i]; ++i) {
        char vari = s[i];
        if (top && pilha[top - 1] == 'a' && vari == 'b') {
            --top;
            resul += x;
        } else {
            pilha[top++] = vari;
        }
    }

    /*
    ===================================================
    Percorre outra pilha pra verificar a sequência "ba"
    ===================================================
    */

    char *pilha2 = malloc(top);
    int top2 = 0;
    for (int i = 0; i < top; ++i) {
        char c = pilha[i];
        if (top2 && pilha2[top2 - 1] == 'b' && c == 'a') {
            --top2;
            resul += y;
        } else {
            pilha2[top2++] = c;
        }
    }

    /*
    =========================================
    Liberação da Memória e retorno dos pontos 
    =========================================
    */

    free (pilha);
    free (pilha2);
    return resul;
}