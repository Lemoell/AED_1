char* shortestCompletingWord(char* licensePlate, char** words, int wordsSize) {
    char limpa[];
    int y;
    int tam = strlen(licensePlate);
    //Percorre
    for(int i =0; i<tam; i++){
        //verificar se tem espaço e numeros,
         if (licensePlate[i] > '0' && licensePlate[i] > '9' || licensePlate[i] == ' ') {
            limpa[y++] = licensePlate[i];
        }
    }
    limpa[y] = '\0';
}