#include <string>
#include <iostream>

char* copia(char destino[], char origem[], int tam_origem){
 
 for(int i = 0;i<tam_origem;i++){
   destino[i] = origem[i];          
 }  
 return destino;
}


int main(){
    
  char origem[] = "UNOESC";
  char destino[6];

  for(int i2 = 0;i2<6;i2++){
     std::cout <<  copia(destino,origem,6)[i2];                 
  }  
  getchar();  
  return 0;
}
