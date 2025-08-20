typedef struct MinStack {
    int *stack;
    int *min_stack;
    int top;
    int capacity;
} MinStack;

MinStack* minStackCreate() {
    struct MinStack* obj = (struct MinStack*)malloc(sizeof(struct MinStack));
    obj->capacity = 1000;
    obj->stack = (int*)malloc(sizeof(int) * obj->capacity);
    obj->min_stack = (int*)malloc(sizeof(int) * obj->capacity);
    obj->top = -1;
    return obj;
}

void minStackPush(struct MinStack* obj, int val) {
    if (obj->top == obj->capacity - 1) return;
    obj->stack[++(obj->top)] = val;
    if (obj->top == 0 || val < obj->min_stack[obj->top - 1]) {
        obj->min_stack[obj->top] = val;
    } else {
        obj->min_stack[obj->top] = obj->min_stack[obj->top - 1];
    }
}

void minStackPop(struct MinStack* obj) {
    if (obj->top == -1) return;
    obj->top--;
}

int minStackTop(struct MinStack* obj) {
    if (obj->top == -1) return -1;
    return obj->stack[obj->top];
}

int minStackGetMin(struct MinStack* obj) {
    if (obj->top == -1) return -1;
    return obj->min_stack[obj->top];
}