#include <stdio.h>

//int fwrite(const void *ptr, int size, int n, FILE *arq) 
// *ptr vetor de caracteres a serem gravados, size = tamanho do tipo de dado gravado em bytes. int = 4 bytes = sizeof(tipo);
// n = numero de elementos, fp = endereco do arquivo

void main(){
    
    /*FILE *fp; 
    //int texto[] = {1,2,3,4,5};
    int v[5],i, n;
    //int *ptr = &texto;
    
    fp = fopen("C:\\Teste2.txt","rb");    
    
    //fwrite(ptr,sizeof(int),5,fp);
    
    n = fread(v,sizeof(int),5,fp);
    
    for(i = 0; i < n;i++){
         printf("%d",v[i]);      
    }
        
    fclose(fp);
    */

FILE *fp;
char s[] = "C:\\teste2.txt";
int ch;
fp = fopen(s,"r+");
if(fp!=NULL){
printf("Posicao %d (inicio): %c \n",ftell(fp),ch);
do{
ch = fgetc(fp);
printf("Posicao %d: %c \n",ftell(fp),ch);
}while(ch!=EOF);
fseek(fp,2,SEEK_SET);
  printf("Posicao atual: %d, valor: %c",ftell(fp),fgetc(fp));
  fclose(fp);
}    
    getchar(); 
     
}    
