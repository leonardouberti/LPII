#include <iostream>

  void max(int a,int b, int& res){     
   res = (a > b) ? a : b;
  }

  int main(){
      
      int a, b, res;      
      
      std::cout << "Num 1: ";
      std::cin >> a;      
      std::cout << "Num 2: ";
      std::cin >> b;
            
      
      max(a,b,res);
      std::cout << "\nMaior: " << res;
      getchar();
      getchar();    
      return 0;
}
