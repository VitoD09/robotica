#include <iostream>
using namespace std;
    
    void troca (int a,int& b){
        a = a * 3;
        b = b * 3;
        cout<< "valores alterados agora pricipal e "<<a<<", e o valor de referencia e "<<b<<endl;
    }
int main() {
    int valor, referencia;

    cout<<"Informe o valor pricipal: "<<endl;
    cin>> valor;
    cout<<"Informe o valor referencia: "<<endl;
    cin>> referencia;
    cout<<"os valores fornecidos foram principal: "<<valor<<" referencia: "<<referencia<<endl;

    troca(valor,referencia);
    
    return 0;
}
