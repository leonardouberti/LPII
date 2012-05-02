#include <stdio.h>
#include <string.h>
char* concatena(char* string1, char* string2){
     
     int i, tam;  
     tam = strlen(string1);     
      
       for(i = 0; string2[i] != '\0';i++){
        string1[tam+i] = string2[i];
       }           
      string1[tam+i] = '\0';
      return string1;
   }  
    
  
main(){
    
    char vetor[] = "Leonardo";
    char vetor2[] = "Uberti";
    puts(concatena(vetor,vetor2));

    getchar(); 
  //  return 0;  
}


