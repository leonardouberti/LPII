#include <stdio.h>

void main(){
    /* 
     int f;
     FILE *fp;
     
     fp = fopen("C:\\teste.txt","r"); // abertura de arquivo = "r" apenas abre o 
     arquivo se o mesmo existir, "r+" caso o arquivo não exista será criado
     
//     fflush - grava as informações fisicamente sem a necessidade de fechar o arquivo com fclose;
     
     fclose(fp); // fechamento do arquivo
     
     */
/*     
FILE *fp;
char s[] = "C:\\teste.txt";
int ch;
fp = fopen(s,"r");
   if(fp != NULL){
    do{
       ch = fgetc(fp);
       printf("%c",ch);         
    }while(ch != -1);

  fclose(fp);
  
  */
  
  FILE *fp_origem, *fp_destino;
char origem[] = "C:\\teste.txt",
destino[] = "C:\\arquivo_destino.txt";
int ch;
fp_origem = fopen(origem,"r"); // r = modo read
fp_destino = fopen(destino,"w"); // modo write

if(fp_origem!=NULL && fp_destino!=NULL){ // verifica se os arquivos de origem e destino existem
                   
  while(ch != EOF){ // verificar se o arquivo não chegou ao fim
     ch = fgetc(fp_origem); // vare o arquivo e recupera cada caracter até o fim do mesmo
     if(ch != EOF){ // para não gravar o valor de EOF no fim do arquivo
       fputc(ch,fp_destino); //agrava no arquivo de destino (fp_destino) o caracter contido em ch
     }
  }
  
fclose(fp_origem); // fecha os arquivos
fclose(fp_destino);  
  getchar();
 }             
}
