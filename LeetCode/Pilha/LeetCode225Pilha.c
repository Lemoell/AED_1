#define MAX 100

typedef struct {
    int v[MAX];
    int top;
} MyStack;


MyStack* myStackCreate() {
    MyStack *stack = (MyStack*)malloc(sizeof(MyStack));
    stack->top = -1;
    return stack;
}

void myStackPush(MyStack* obj, int x) {
    if( obj -> top < MAX -1 ) {
        obj -> v[++obj -> top] = x;
    }
    else {
        printf("PILHA CHEIA");
    }
}

int myStackPop(MyStack* obj) {
    if ( obj-> top == -1 ) {
        printf("ERRO MEMORIA VAZIA!");
        return -1;
    }
    else {
        return obj -> v[obj -> top--];
    }
}

int myStackTop(MyStack* obj) {
    if ( obj -> top == -1 ) {
        printf("ERRO PILHA VAZIA!!");
        return -1;
    }
    else {
        return obj -> v[obj -> top];
    }
}

bool myStackEmpty(MyStack* obj) {
    return obj -> top == -1;
}

void myStackFree(MyStack* obj) {
    free (obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/