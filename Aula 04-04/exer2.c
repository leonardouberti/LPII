#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int valor = 0, res = 0;
        
    do { 
      
      printf("Informe um valor : ");
      scanf("%d",&valor); 
      res = res + valor;
                            
    } while(valor != 0);
    
    printf("%d",res); 
    getchar();
    getchar();
    return 1;      
}
