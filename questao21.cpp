#include <iostream>
using namespace std;
   float area(float alt, float bs){
    
    float area = alt * bs;
    return area;
  }

int main() {
   float altura, base;
   cout<<"Informe o valor da altura do retangulo: "<<endl;
   cin>>altura;
   cout<<"Informe o valor da base do retangulo: "<<endl;
   cin>>base;
  
  cout<<"A area do retangulo é "<< area(altura, base)<<endl;
 return 0;
}
