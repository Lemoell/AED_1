// Lemoel Costa - 23105104


int maximumGain(char* s, int x, int y) {
    int n = strlen (s), result = 0;
    char *pilha = malloc (n);
    int top = 0;

    int remover = 0;

    if (y > x) {
        remover = 1;
    }
    
    for (int i = 0, j = n - 1; i < j; ++i, --j) {
        char suporte = s[i];
        s[i] = s[j];
        s[j] = suporte;
    }

    for (int i = 0; s[i]; ++i) {
        char vari = s[i];
        if (top && pilha[top - 1] == 'a' && vari == 'b' ) {
            --top;
            result += x;
        } else {
            pilha [top++] = vari;
        }
    }
    
    char *pilha2 = malloc(top);
    int top2 = 0;
    //for () {

    //}
    
    free(pilha);
    free(pilha2);
    return result;
}