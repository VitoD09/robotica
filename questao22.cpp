#include <iostream>
using namespace std;

int main() {
   float salario, resultado;
   const float bonus = 15.0/100.0;
   
   cout<<"Informe o valor do salario: "<<endl;
   cin>>salario;
   
   resultado = salario + (salario * bonus );
   
   cout<<"O valor do salario com o bunos sera de "<<resultado<<endl;
    return 0;
}
