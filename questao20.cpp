#include <iostream>
#include <string>
using namespace std;
  void nota (string nm, float n1){
   if (n1 >=7){
      cout<<" O/a "<<nm<<" esta aprovado "<<endl;
   }else if(n1>4 && n1 < 7){
      cout<<" O/a "<<nm<<" esta de prova final "<<endl;
   }else{
     cout<<"O/a "<<nm<<" esta reprovado "<<endl;
   }
  }

int main() {
   float nota1;
   string nome;

   cout<<"Informe o nome do aluno: "<<endl;
   cin>>nome;
   cout<<"Informe a nota do "<<nome<<" : "<<endl;
   cin>>nota1;

   nota (nome, nota1);
return 0;
}
