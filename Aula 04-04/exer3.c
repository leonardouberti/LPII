#include <stdio.h>
#include <stdlib.h>
int tam_str(char *string){
 
    if(*string == '\0'){
        return 0;
      }else{
        return 1 + tam_str(string + 1);
    }
 }

int main(){       
       
       printf("%d",tam_str("Leonardo Uberti")); 
       getche();  
       return 0;    
}
