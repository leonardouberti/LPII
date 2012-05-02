#include <iostream>
#include <stdio.h>

int max(int a, int b){
  return (a == b) ? 0 : (a < b) ? b : a;
}


int main () {
     
int idade1, idade2, r;

 std::cout << "Digite a primeira idade: ";
 std::cin >> idade1;     
 std::cout << "Digite a segunda idade: ";
 std::cin >> idade2;  
 std::cout << "Maior idade: " << max(idade1,idade2);
 getchar();
 getchar();
 return 0;
}









