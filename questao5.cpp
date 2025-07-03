#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string nome;
    int idade;
    
    cout<<"Informe o seu nome: ";
    cin>> nome ;
    cout<<"Informe sua idade: ";
    cin>> idade;
    
    cout<< nome<<" tem "<<idade<<" anos de idade."<<endl;

    return 0;
}
