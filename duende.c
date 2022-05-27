#include "duende.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct duende{
  //preencher
  char nome[20];
  int idade;
  int escalado ;
};

struct time{
  //preencher
  char lider[20];
  char entregador[20];
  char pilotos[20];
  int idadeLider;
  int idadeEntregador; 
  int idadePiloto;
};

void lerQuantidade(int *qtd){

  scanf("%d",qtd);
}
//Manter como especificado

TADduende *alocaDuendes(int qtd){
  
  TADduende *duende = malloc(qtd*sizeof(TADduende));
  return duende;
}

//Manter como especificado
TADtime *alocaTimes(int qtd){

  TADtime *time = malloc(qtd*sizeof(TADtime)); 
  
  return time;
}

//Manter como especificado
void desalocaDuendes(TADduende **D){
  free(*D);
}

//Manter como especificado
void desalocaTimes(TADtime **T){
  
  free(*T); 
}

//Manter como especificado
void lerDuendes(TADduende *D, int qtd){
  int i,x=0;
  //ler nome e idade de cada duente
  //aproveitar para colocar o valor 0 no campo escalado

  for ( i = 0; i < qtd; i++)
  {
    scanf("%s",D[i].nome);
    scanf("%d",&D[i].idade);
    if (D[i].idade<10 || D[i].idade>100)
    {
      break;
    }
    
    D[i].escalado =0;
  }
  
}

//Manter como especificado
void escalarTimes(TADduende *D, TADtime *T, int qtd){
  int i, indice;
  //completar o XXX
  for (i=0; i<qtd/3; i++)
  {
    indice = proximoMaisVelho(D, qtd);
    //marcar o duende do indice como escalado
    //a linha abaixo copia o nome do duende para a estrutura do time
    strcpy(T[i].lider, D[indice].nome);
    
    T[i].idadeLider = D[indice].idade;
    //printf(" ");
    //copiar a idade
  }
  for (i=0; i<qtd/3; i++)
  {
    indice = proximoMaisVelho(D, qtd);
    //marcar o duende do indice como escalado
    //a linha abaixo copia o nome do duende para a estrutura do time
    strcpy(T[i].entregador, D[indice].nome);
    T[i].idadeEntregador = D[indice].idade;
    //copiar a idade
  }
  for (i=0; i< qtd/3; i++)
  {
    indice = proximoMaisVelho(D, qtd);
    //marcar o duende do indice como escalado
    //a linha abaixo copia o nome do duende para a estrutura do time
    strcpy(T[i].pilotos, D[indice].nome);
    T[i].idadePiloto = D[indice].idade;
    //copiar a idade
  }

  //repetir o laco acima, mas para o entregador
  //repetir o laco acima, mara para o piloto
}

int proximoMaisVelho(TADduende *D, int qtd){
  int indice;
  int Mvelho =0;
  for (int i = 0; i < qtd; i++)
  {
    if (D[i].escalado==0 && D[i].idade>Mvelho )
    
    {
        Mvelho = D[i].idade;
        indice = i;
    }
    }
  D[indice].escalado = 1;
  return indice;
}

//Manter como especificado
void printTimes(TADtime *T, int qtd){

  
  for (int i = 0; i < qtd; i++)
  {
   
   printf("Time %d\n",i+1);
   printf("%s %d\n",T[i].lider, T[i].idadeLider);
   printf("%s %d\n",T[i].entregador, T[i].idadeEntregador);
   printf("%s %d\n",T[i].pilotos, T[i].idadePiloto);
   printf("\n");

  }
  
}
