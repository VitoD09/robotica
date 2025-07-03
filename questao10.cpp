#include <iostream>
using namespace std;
   void comparacao (float num1, float num2){
       if (num1>num2){
           cout<< num1 <<" e maior que "<< num2<<endl;
       }else{
           cout<< num2 <<" e maior que "<<num1<<endl;
       }
   }
int main() {
    float valor1, valor2;
    
    cout<<"Informe o primeiro numero: ";
    cin>> valor1;
    cout<<"Informe o segundo nunero: ";
    cin>> valor2;
    
    comparacao(valor1,valor2);
    return 0;
}

