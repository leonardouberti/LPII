#include <stdio.h>

typedef struct {
   int codigo;
   char modelo[100];
} CARRO;


void gravar (CARRO *ptr) {  
  printf("\nCodigo: ");
  scanf("%i",&ptr->codigo);
  printf("Modelo: ");
  scanf("%s",ptr->modelo);  
}

void mostrarTodos(CARRO *c, int tam) {

int i;     
for(i=0;i<tam;i++){ 
  if(c[i].codigo != 0){                       
    printf("Codigo: %i \n",c[i].codigo);
    printf("Modelo: %s \n",c[i].modelo);
    }  
  }
}

void localizar(CARRO *c, int tam) {
  
int i,codigo, localizado = 0; 
     
printf("\nCodigo a ser contrado: ");
scanf("%d",&codigo);
    
for(i=0;i<tam;i++){ 
    if(c[i].codigo == codigo){     
      printf("\nCodigo: %i \n",c[i].codigo);
      printf("Modelo: %s \n\n",c[i].modelo);
      localizado = 1;
    } 
  }  
  if(localizado == 0){
    printf("Registro nao encontrado!\n\n");      
  }
}

void apagar(CARRO *c, int tam) {
  
int i,i2,codigo; 
     
printf("\nCodigo a ser excluido: ");
scanf("%d",&codigo);
    
for(i=0;i<tam;i++){ 
    if(c[i].codigo == codigo){     
         c[tam].codigo = 0;                     
         printf("Registro excluido com sucesso!\n");      
            for(i2 = i;i2 < tam; i2++){
              c[i2] = c[i2+1];            
         }         
      } 
      //Não sei como diminuir o tamanho do vetor ao excluir um elemento            
   }
}

void alterar(CARRO *c, int tam) {
  
int i,codigo, localizado = 0; 
     
printf("\nCodigo a ser alterado: ");
scanf("%d",&codigo);
    
    for(i=0;i<tam;i++){ 
      if(c[i].codigo == codigo){     
        printf("Modelo: ");
        scanf("%s",c[i].modelo);      
        localizado = 1;
        printf("Registro alterado com sucesso!\n\n"); 
      }
    }
    if(localizado == 0){
      printf("Registro nao encontrado!\n\n");          
  }
}


main(){
       
  int opc = 0, i = 0;
  CARRO carro[10];  
    
  while (opc != 6){        
        printf("\n1 - Inserir registro OK\n");
        printf("2 - Alterar registro OK\n");
        printf("3 - Apagar registro OK (+/-)\n");
        printf("4 - Consultar registro OK\n");
        printf("5 - Listar todos os registros OK\n");
        printf("6 - Sair OK\n");        
        scanf("%d",&opc);

   switch(opc){
               
      case 1 : gravar(&carro[i]); i++; break;
      case 2 : alterar(carro,i); break;
      case 3 : apagar(carro,i); break;
      case 4 : localizar(carro,i);break;
      case 5 : mostrarTodos(carro,i); break;
      case 6 : ;break;
      default : printf("Opcao invalida!\n");            
      }
   }    
}       
