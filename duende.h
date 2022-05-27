# ifndef duende_h
# define duende_h

typedef struct duende TADduende;
typedef struct time TADtime;

//COMPLETAR O NOME DA ESTRUTURA

void lerQuantidade(int *qtd);
//Manter como especificado
TADduende *alocaDuendes(int qtd);
//Manter como especificado
TADtime *alocaTimes(int qtd);
//Manter como especificado
void desalocaDuendes(TADduende **D);
//Manter como especificado
void desalocaTimes(TADtime **T);
//Manter como especificado
void lerDuendes(TADduende *D, int qtd);
//Manter como especificado
void escalarTimes(TADduende *D, TADtime *T, int qtd);
//Manter como especificado
int proximoMaisVelho(TADduende *D, int qtd);
//Manter como especificado
void printTimes(TADtime *T, int qtd);

#endif
