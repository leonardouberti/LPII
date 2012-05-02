#include <iostream>


void mult(int iValor1, int iValor2, int& res){
    std::cout << "I\n";
  res = iValor1 * iValor2;
}

void mult(float fValor1, float fValor2, float& res){
          std::cout << "F\n";
  res = fValor1 * fValor2;
}

void mult(double dValor1, double dValor2, double& res){
           std::cout << "D\n";
  res = dValor1 * dValor2;
}

//IMPLEMENTAR A PASSAGEM DE PARAMENTRO POR REFERENCIA


int main() {
    
int iValor1, iValor2, res;
float fValor1, fValor2;
double dValor1, dValor2;
    
    std::cout << "Valor 1: ";
    std::cin >> iValor1;
    std::cout << "Valor 2: ";
    std::cin >> iValor2;
    std::cout << "\n";
    
    mult(iValor1,iValor2, res);
    std::cout <<  res << "\n";
    
    //getche();
    //getchar();
    return 0;
    
}
