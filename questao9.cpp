#include <iostream>
using namespace std;
   int quadrado (int num1){
       return num1*num1;
   }

int main() {
    int num;
    cout<< "Informe um numero: "<<endl;
    cin >> num;
    
    int resultado = quadrado(num);
    cout<< "o quadrado de "<< num << " e "<<resultado<<endl;
    return 0;
}
