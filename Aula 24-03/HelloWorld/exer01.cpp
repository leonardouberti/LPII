#include <iostream>
#include "arquivo2.h"

using namespace std;

//int main(){

    // EXER 01

    /*char array[] = "Leonardo";
    int array[15];
    int* vetor = array;

    for(int i = 1;i<=15;i++){
        *vetor = i;
        vetor++;
    }

    vetor = array; //para remarcar a posicao inicial do ponteiro do array

    for(int i2 = 0;i2<15;i2++){
            std::cout << *vetor << "\n";
        vetor++;
    }

   /* char* vetor = &array;


    while(*vetor != '\n'){
        std::cout << *vetor << "\n";
        vetor++;
    }
    */

    //REVER, NÃO FUNCIONOU
    /*
    int vetor[15];
    int* vetor2 = vetor;

    for(int i2 = 1;i2<=15;i2++){
        *vetor = i2;
        vetor++;
    }

    vetor2 = &vetor;

    int tamvetor = sizeof(vetor2)/(sizeof(int));

    for(int i = 0;i < tamvetor;i++){
        std::cout << *vetor2;
        vetor2++;
    }
    */

//Exer 03
    /*int main(){
      void (*ptr) (void);
      ptr = funcao;
      ptr();
      return 0;
    }

    /*

    //Exer04*/

int main(){
    int* a;
    *a = 6;

}





