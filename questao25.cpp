#include <iostream>
using namespace std;
   int InvertSinal(int &valor){
   int resultado;
       if (valor > 0){
           resultado = -(valor);
       }else if(valor<0){
           resultado = abs(valor);
       }
       return resultado;
   }

int main() {
    int num1;
    
    cout<<"Digite um valor: "<<endl;
    cin>>num1;
    
    cout<< "Trocando os sinais de "<<num1<< " para "<<InvertSinal(num1) <<endl;
    return 0;
}
