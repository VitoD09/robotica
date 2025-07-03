#include <iostream>
using namespace std;
  void incrementar (int *p){
      *p = *p + 1;
      cout<<"O valor apos a incrementaçao é "<< *p<<endl;
  }

int main() {
    int num1;
    cout<<"Informe um valor: "<<endl;
    cin>> num1;
    int ptr = num1;
    
    incrementar(&ptr);
    return 0;
}
