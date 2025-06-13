#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

    /*
    =====================================
    Alocando em bloco para as informações
    =====================================
    */

    void *pBuffer = malloc (
        sizeof (int) +         //Opação do menu para selecionar
        100 * sizeof (char) +  //Aloca para nome  para 100 caracter
        100 * sizeof (char) +  //Aloca para email 
        sizeof (int) +         //Idade 
        sizeof (void*)         //Ponteiro para o inicio da Lista
    );
    
    /*
    ============================================
    verificando se alocou corretamente a memória 
    ============================================
    */

    if (!pBuffer) return 1;
    
    /*
    ======================================
    Dividindo o espaço do buffer em partes 
    ======================================
    */

    int *pOpcao     = pBuffer;
    char *pNome     = (char *)(pOpcao + 1);
    char *pEmail    = pNome + 100;
    int *pIdade     = (int *)(pEmail + 100);
    void **ppHead   = (void **)(pIdade + 1);
    *ppHead = NULL;  //Inicialmente lista vazia

    /*
    ==================================
    Menu do que o usuário deseja fazer 
    ==================================
    */

    size_t tamAtual = sizeof(int) + 200 + sizeof(int) + sizeof(void*);

    do {
        printf ("\n1-Adicionar Pessoa\n2-Remover Pessoa\n3-Buscar Pessoa\n4-Listar todos\n5-Sair\nEscolha: ");
        scanf ("%d", pOpcao);
        getchar ();

        /*
        =================
        Opção 1-Adicionar
        =================
        */

        if (*pOpcao == 1) {
            
            printf ("Nome: ");
            fgets (pNome, 100, stdin);
            pNome[strcspn (pNome, "\n")] = 0;

            printf ("Idade: ");
            scanf ("%d", pIdade);
            getchar ();

            printf ("Email: ");
            fgets (pEmail, 100, stdin);
            pEmail[strcspn (pEmail, "\n")] = 0;

            size_t lenNome = strlen (pNome) + 1;
            size_t lenEmail = strlen (pEmail) + 1;
            size_t extra = sizeof (void*) + sizeof (int) + lenNome + lenEmail;

            /*
            ====================================
            Altera o tamanho do bloco armazenado
            ====================================
            */

            void *novo = realloc (pBuffer, tamAtual + extra);
            if (!novo) {
                printf ("Erro de memória!\n");
                free (pBuffer);
                return 1;
            }
            pBuffer = novo;

            /*
            ==============================
            Atualiza os ponteiros internos
            ==============================
            */

            pOpcao = pBuffer;
            pNome = (char *)(pOpcao + 1);
            pEmail = pNome + 100;
            pIdade = (int *)(pEmail + 100);
            ppHead = (void **)(pIdade + 1);

            void *pNovo = (char *)pBuffer + tamAtual;  //Ponteiro para o novo nó no fim do bloco

            /*
            =============
            Preenche o nó
            =============
            */

            *(void **)pNovo = *ppHead;
            *(int *)((char *)pNovo + sizeof (void *)) = *pIdade;
            memcpy ((char *)pNovo + sizeof (void *) + sizeof (int), pNome, lenNome);
            memcpy ((char *)pNovo + sizeof (void *) + sizeof (int) + lenNome, pEmail, lenEmail);

            *ppHead = pNovo;  //Atualiza head para o novo nó
            tamAtual += extra;

            /*
            ===============
            Opção 2-Remover
            ===============
            */

        }
        else if (*pOpcao == 2) {
            printf ("Informe o nome para remover: ");
            fgets (pNome, 100, stdin);
            pNome[strcspn (pNome, "\n")] = 0;

            void *prev = NULL, *cur = *ppHead;
            while (cur) {
                char *nomeCur = (char *)cur + sizeof(void *) + sizeof(int);
                if (strcmp (nomeCur, pNome) == 0) {
                    void *prox = *(void **)cur;
                    if (prev) *(void **)prev = prox;
                    else *ppHead = prox;
                    printf ("Removido: %s\n", nomeCur);
                    break;
                }
                prev = cur;
                cur = *(void **)cur;
            }
            if (!cur) printf ("Pessoa não encontrada.\n");
        }
 
        /*
        ==============
        Opção 3-Buscar
        ==============
        */


        else if (*pOpcao == 3) {
            printf ("Informe o nome para buscar: ");
            fgets (pNome, 100, stdin);
            pNome[strcspn(pNome, "\n")] = 0;

            void *cur = *ppHead;
            while (cur) {
                char *nomeCur = (char *)cur + sizeof (void *) + sizeof (int);
                if (strcmp (nomeCur, pNome) == 0) {
                    int *idadeCur = (int *)((char *)cur + sizeof (void *));
                    char *emailCur = nomeCur + strlen (nomeCur) + 1;
                    printf ("Encontrado: %s, %d anos, email: %s\n", nomeCur, *idadeCur, emailCur);
                    break;
                }
                cur = *(void **)cur;
            }
            if (!cur) printf ("Pessoa não encontrada.\n");
        }

        /*
        ==============
        Opção 4-Listar
        ==============
        */

        else if (*pOpcao == 4) {
            void *cur = *ppHead;
            while (cur) {
                int idadeCur = *(int *)((char *)cur + sizeof(void *));
                char *nomeCur = (char *)cur + sizeof(void *) + sizeof(int);
                char *emailCur = nomeCur + strlen(nomeCur) + 1;
                printf ("\nNome: %s\nIdade: %d\nEmail: %s\n", nomeCur, idadeCur, emailCur);
                cur = *(void **)cur;
            }
        }
    } while (*pOpcao != 5);
    
    /*
    =========================================
    Libera a memória para encerrar o programa
    =========================================
    */

    free (pBuffer);
    return 0;
}