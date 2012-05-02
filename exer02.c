#include <stdio.h>

int main(){
     int valor;
     printf("Informe o numero de posicoes: \n");
     scanf("%d",&valor);
     int vetor[valor],contador = 1;
     int i = 0;
     
     if(contador <= valor){
                 for(i = 0; i < valor; i++){
                       printf("Valor %d: ",(i + 1));
                       scanf("%d",&vetor[i]);  
                       contador++;
                           }     
                       }
                       printf("\n");
                       for(i = 0; i < valor; i++){
                             printf("Valor [%d] de %d: %d\n",(i + 1),valor,vetor[i]);
                       }  
                          getche();
                       return 0;
                 }
