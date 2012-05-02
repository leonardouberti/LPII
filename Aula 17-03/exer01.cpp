#include <iostream>


int contaCaracter(char* teste){
    int con = 0 , fim = 0;
    
    
    for(int i = 0;fim < 1;i++){
      if(teste[con]!='\0'){
       con++;
      }else{
        fim = 1;
      }
 }
 return con;
}


int main(){  
    
char nome [] = "Leonardo"; 
std::cout << contaCaracter(nome);
getchar();   
}
