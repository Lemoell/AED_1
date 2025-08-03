#define MAX 1000
#define MOD 1000000007

long long comb [MAX + 1][MAX + 1];

/*
=============================================================
PREENCHE A TABELA DE COMBINAÇÕES USANDO O TRIANGULO DE PASCAL
=============================================================
*/

void build_combinations() {
    for (int i = 0; i <= MAX; ++i) {
        comb[i][0] = comb[i][i] = 1;

        for (int j = 1; j < i; ++j) {
            comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j]) % MOD;
        }
    }
}

/*
===================================================
FAZ A VERIFICAÇÃO DAS COMBINAÇÕES QUE SÃO POSSIVEIS 
===================================================
*/

long dfs(int* nums, int len) {
    if (len <= 2) return 1; // -> Se tiver 2 ou menos numeros no array, retorna 1 combinação
    int raiz = nums[0]; 

    int* left = (int*)malloc(len * sizeof(int));
    int* right = (int*)malloc(len * sizeof(int));
    int lsize = 0, rsize = 0; 

    for (int i = 1; i < len; ++i) {
        if (nums[i] < raiz) { 
            left[lsize++] = nums[i]; 
        } else {
            right[rsize++] = nums[i];
        }
    }

    long leftOpcoes = dfs(left, lsize); 
    long rightOpcoes = dfs(right, rsize);

    long Opcoes = (comb[lsize + rsize][lsize] * ((leftOpcoes * rightOpcoes) % MOD)) % MOD;

    free(left);
    free(right);

    return Opcoes;
}

/*
=====================================================================
ENTRADA DO ARRAY COM OS VALORES E O RETORNO DAS COMBINAÇÕES POSSIVEIS
=====================================================================
*/

int numOfWays(int* nums, int numsSize) {
    build_combinations();
    long res = dfs(nums, numsSize);
    return (int)((res - 1 + MOD) % MOD);
}