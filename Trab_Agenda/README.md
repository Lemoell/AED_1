# TRABALHO - Agenda pBuffer

Lemoel Costa - 23105104

## Descrição do Trabalho

O desafio é não poder criar variáveis e sim um buffer de memória (void *pBuffer). Nisso vocês terão que fazer o trabalho que o Sistema Operacional faz para vocês ao organizar a memória.

### Regras
- 1-Nenhuma variável pode ser declarada em todo o programa, somente ponteiros. Todos os dados do programa devem ser guardados dentro do pBuffer.
    - 1-Nem mesmo como parâmetro de função. Só ponteiros que apontam para dentro do pBuffer.
    - 2-Exemplo do que não pode: int c; char a; int v[10];  void Funcao(int parametro)
- 2-Não pode usar struct em todo o programa.
