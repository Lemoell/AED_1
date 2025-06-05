#define MAX 5000

int evalRPN ( char** tokens, int tokensSize ) {
    int stack[MAX];
    int top = -1;

    for ( int i = 0; i < tokensSize; i++ ) {
        char* token = tokens [i];

        if ( strcmp ( token, "+" ) == 0||
            strcmp ( token, "/" ) == 0 ||
            strcmp ( token, "*" ) == 0 ||
            strcmp ( token, "-" ) == 0
        ) {
            int b = stack[top--];
            int a = stack[top--];

            int result;

            if ( strcmp (token, "+" ) == 0 ) result = a + b;
            else if ( strcmp ( token, "/" ) == 0 ) result = a / b;
            else if ( strcmp ( token, "*" ) == 0 ) result = a * b;
            else result = a - b;

            stack[++top] = result;
        }else {
            stack[++top] = atoi(token);
        }
    }
    return stack[top];
}