#include <iostream>


int* inverteValor(int* valorA, int* valorB){
 int* tmp;
 
  tmp = valorA;
  valorA = valorB;
  valorB = tmp;
  std::cout << *valorA << "\n";
  std::cout << *valorB << "\n";
  return 0;
}

int main(){
    int a = 1,b = 2;
    int* c = &a;
    int* d = &b;    
    inverteValor(c,d);
    
//    std::cout << *c << " " << *d;    
    getchar();
}



//TEMA DE CASA (IMPLEMENTADO)

//Implementar função, recebe dois ponterios inteiros como parametro, e inverter o valor das variaveis;
