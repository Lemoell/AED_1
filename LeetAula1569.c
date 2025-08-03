#define MAX 1000
#define MOD 1000000007

long long comb [MAX + 1][MAX + 1];

void build_combinations() {
    for (int i = 0; i <= MAX; ++i) {
        comb[i][0] = comb[i][i] = 1;

        for (int j = 1; j < i; ++j) {
            comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j]) % MOD;
        }
    }
}

long dfs(int* nums, int len) {
    if (len <= 2) return 1;
    int raiz = nums[0];
    
    int* left = (int*)malloc(len * sizeof (int));
    int* right = (int*)malloc(len * sizeof (int));
    int lsize = 0, rsize = 0;

    for (int i = 1; i < len; ++i) {
        if () {

        } else {
            
        }
    }
}