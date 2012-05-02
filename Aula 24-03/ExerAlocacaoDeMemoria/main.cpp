#include <iostream>

using namespace std;

/*
void func(int* ponteiro){
    *ponteiro = 10;
}

int main() {
    int* ptr = new int[1];
   *ptr = 5;

   std::cout << "Valor inicial " << *ptr;
   func(ptr);

   delete ptr; // apenas "limpa" o conteudo do ponteiro
   //ptr = NULL; //elimina totalmente o ponteiro
   std::cout << "\nValor final " << *ptr << endl;
      return 0;
}
*/


void init(int* vetor, int tamV){

    int* inicio_vetor = vetor;

    //tamV = sizeof(vetor)/(sizeof(int));

    for(int i = 0;i<tamV;i++){
        std::cout << "Informe o valor: ";
        std::cin >> *vetor;
        vetor++;
    }

    vetor = inicio_vetor;

    for(int i = 0;i<tamV;i++){
        std::cout << "Valor " << *vetor << "\n";
        vetor++;
    }
}


int main(){

    int tam;
    std::cout << "Informe o tamanho do array: ";
    std::cin >> tam;

    int* vetor = new int[tam];
    init(vetor, tam);

    delete vetor;
    vetor = NULL;
    return 0;
}



