#include <iostream>

void c2f(double& res){
  res = res * 1.8 + 32;
}    

int main(){
    
double valor;

        std::cout << "Informe a temperatura em Celsius: ";
        std::cin >> valor; 
        c2f(valor);
        std::cout << valor << "\n";
        getchar();
        getchar();
        return 0;    
} 
