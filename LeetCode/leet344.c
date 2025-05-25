void reverseString(char* s, int sSize) {
    int esq = 0, dir = sSize - 1;
    while(esq < dir){
        int temp = s[esq];
        s[esq] = s[dir];
        s[dir] = temp;
        esq++;
        dir--;
    }  
}