#include <iostream>
using namespace std ;

  void ehpar (int num1){
      if (num1 % 2 == 0){
          cout<< "true "<<endl;
      }else{
          cout<<" false"<< endl;
      }
  }

int main() {
    int num;
    
    cout<<" informe um numero: "<<endl;
    cin>> num;
    
    ehpar(num);
    return 0;
}
