#include <iostream>
using namespace std;
    void trocar(int &a, int &b){
        int caixa = 0;
        caixa = a;
        a = b;
        b = caixa;
        cout<<"Os valores foram trocados \n"<<"Agora num1 é "<<b<<" e num2 é "<<a<<endl;
    }

int main() {
    int num1, num2;

    cout<<"Informe um valor: "<<endl;
    cin>> num1;
    cout<<"Informe outro valor: "<<endl;
    cin>> num2;
    cout<<"Os valores fornecidos foram respectivamente "<<num1<<" e "<<num2<<endl;
    
    trocar(num1,num2);

    return 0;
}
