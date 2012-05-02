#include <stdio.h>


main(){
     
int tamanho = 5;
char palavra[tamanho];
char palavra2[tamanho];
int inicio = 0, fim = 4;
char tmp;
    for(int i = 0; i < tamanho; i++){
      printf("Valor: ");
      scanf("%c",&palavra[i]);      
      getchar();
    }

      for(int i = 0; i < tamanho; i++){
        if(inicio > fim){
            palavra[inicio] = palavra[fim];
        }
        tmp = palavra[inicio];
        palavra[fim] = tmp;
        inicio++;
        fim--;
      //palavra2[inicio - 0] = palavra[fim];
      }
      
      for(int i = 0; i < tamanho; i++){
              printf("\n%c",palavra[i]);
      }
      getchar();
      
   //return 0;
}
