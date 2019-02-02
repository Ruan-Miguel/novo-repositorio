typedef struct funcionario TAD;

TAD *cria_tad(int tamanho);

void insere_tad(TAD *novo,int local);

void imprime_tad(TAD *atual,int local);

void retorna_nome(TAD *funcionario,char nome[100]);
