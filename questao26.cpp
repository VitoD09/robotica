#include <iostream>
using namespace std;

   void Soma (){
       float num1, num2, resultado;
       cout<<"Informe o primeiro valor: "<<endl;
       cin>>num1;
       cout<<"Informe o segundo valor: "<<endl;
       cin>>num2;
       
       resultado = num1 + num2;
       cout<<"Resultado da opercão "<<num1<<" + "<<num2<<" = "<<resultado<<endl;
   }
   void Subtracao (){
       float num1, num2, resultado;
       cout<<"Informe o primeiro valor: "<<endl;
       cin>>num1;
       cout<<"Informe o segundo valor: "<<endl;
       cin>>num2;
       
       resultado = num1 - num2;
       cout<<"Resultado da opercão "<<num1<<" - "<<num2<<" = "<<resultado<<endl;
   }
   void Multiplicacao (){
       float num1, num2, resultado;
       cout<<"Informe o primeiro valor: "<<endl;
       cin>>num1;
       cout<<"Informe o segundo valor: "<<endl;
       cin>>num2;
       
       resultado = num1 * num2;
       cout<<"Resultado da opercão "<<num1<<" * "<<num2<<" = "<<resultado<<endl;
   }
   void menu (){
       int operacao;
       cout<<"Operaçoes: "<<endl;
       cout<<"1• Soma "<<endl;
       cout<<"2• Subtraçao "<<endl;
       cout<<"3° Multiplicaçao "<<endl;
       
       cout<<"Digite o numero da operaçao desejada: "<<endl;
       cin>> operacao;
       
       if (operacao == 1){
           Soma();
       }else if(operacao == 2){
           Subtracao();
       }else if(operacao == 3){
           Multiplicacao();
       }
   }
   

int main() {
    menu();

    return 0;
}
