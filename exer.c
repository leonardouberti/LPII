#include <stdio.h>

void main(){
       int valor = 0;     
       printf("Informe o valor: ");
       scanf("%i", &valor);
       imprime(valor);
      }
     
      int imprime(int i){
           
            if (i > 0){
               printf("%d\n", i);               
               imprime(--i);
            }else{ 
               printf("Acabou!");
               getche();           
            }
      }  
                            
     
   
     
            
     
      
