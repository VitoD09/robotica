#include <iostream>
using namespace std;

int main() {
    int subst = 0;
    int a;
    int *ptr1=&a;
    int b;
    int *ptr2=&b;
    
    cout<<"Informe o primeiro valor: "<<endl;
    cin>>a;
    cout<<"Informe o segundo valor: "<<endl;
    cin>>b;
    cout<<"Os valores fornecidos sao os seguintes: primeiro valor e "<<a<<" o segundo valor e "<<b<<endl;
    subst = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = subst;
    
    cout<<"Apos a troca os valores fornecidos sao: o primeiro ficou como "<<*ptr1<<" e o segundo como "<< *ptr2<<endl;
    return 0;
}

