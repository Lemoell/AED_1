/*
    Lemoel Costa - 23105104
*/

char* shortestCompletingWord(char* licensePlate, char** words, int wordsSize) {
    //inicia o contador de cada letra em 0
    //26 casas para armaenar a contagem do alfabeto de a até b
    int aparicoes[26] = {0}; 
    int i;
    
    ////////////////////////////////////////////////
    //percorrer o array para verificar os caracter//
    ////////////////////////////////////////////////

    for(i = 0; licensePlate[i] != '\0'; i++){
        if((licensePlate[i] >= 'a' && licensePlate[i] <= 'z') || (licensePlate[i] >= 'A' && licensePlate[i] <= 'Z')){
            char letra = licensePlate[i];
            //transforma letras maiusculas em minuscular 
            letra = tolower(letra);
            aparicoes[letra - 'a']++;
        }
    }

    //nao esta apontando para nada
    char *pal_certa = NULL; 
    int y;

    //////////////////////////////////////////////////
    //verificar se as aparições das letras nas words//
    //////////////////////////////////////////////////

    for(i = 0; i < wordsSize; i++){
        int aparicoes_das_words[26] = {0};
        //usando "y" para percorrer as letras da palavra de num "i"
        for(y = 0; words[i][y] != '\0'; y++){
            char letra = words[i][y];
            letra = tolower(letra);
            aparicoes_das_words[letra - 'a']++;
        }
        
        ///////////////////////////////////////////////////////////////
        //compara as aparições de cada letra pra saber a word correta//
        ///////////////////////////////////////////////////////////////

        int indice = 1;
        for(y = 0; y < 26; y++){
            if(aparicoes[y] > aparicoes_das_words[y]){
                indice = 0;
                break;
            }
        }
        
        ////////////////////////////////////////////////////////////////////////////////////////////
        //verifica se selecionou alguma palavra ou se a palavra for menor que escolehu retorna ela//
        ////////////////////////////////////////////////////////////////////////////////////////////

        if(indice){
            if(pal_certa == NULL || strlen(words[i]) < strlen(pal_certa)){
                pal_certa = words[i];
            }
        }
    }
    
    return pal_certa;
}