#include <stdio.h>

typedef struct {
  int idade;
  char nome[100];
} PESSOA;

void ler(PESSOA *ptr){
  printf("Idade: \n");
  scanf("%i",&(*ptr).idade);
  printf("Nome: \n");
  scanf("%s",(*ptr).nome);
}

void mostrar(PESSOA p){
  printf("Idade: %i \n",p.idade);
  printf("Nome: %s \n",p.nome);
}

main(){
       
  PESSOA pedro;
  ler(&pedro);
  mostrar(pedro);
  getche();
}
