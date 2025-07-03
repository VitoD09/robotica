#include <iostream>
using namespace std;

int parametro(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
   
    cout << "Digite o primeiro numero: " ;
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    int soma = parametro(num1, num2);

    cout << "A soma dos numeros é " << soma << endl;

    return 0;
}
