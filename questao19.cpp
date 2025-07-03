#include <iostream>
using namespace std;
  void media (float  n1,float n2,float n3){
  float media;
      media = (n1+n2+n3)/3;
      
      cout<<"A media do aluno é "<<media<<endl;
  }

int main() {
   float nota1,nota2,nota3;
   
   cout<<"Informe a primeira nota: "<<endl;
   cin>>nota1;
   cout<<"Informe a segunda nota: "<<endl;
   cin>>nota2;
   cout<<"Informe a terceira nota: "<<endl;
   cin>>nota3;
   
   media (nota1, nota2, nota3);
    return 0;
}
