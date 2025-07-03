#include <iostream>
using namespace std;

const float LIMITE_SAQUE = 1000.0;
const float LIMITE_DEPOSITO = 5000.0;

float saldo = 0.0;

void consultarSaldo() {
    cout << "Saldo atual: R$ " << saldo << endl;
}

void depositar(float valor) {
    if (valor > 0 && valor <= LIMITE_DEPOSITO) {
        saldo += valor;
        cout << "Deposito de R$" << valor << " realizado com sucesso!" << endl;
    } else {
        cout << "Valor invalido para deposito!" << endl;
    }
}

void sacar(float valor) {
    if (valor > 0 && valor <= saldo && valor <= LIMITE_SAQUE) {
        saldo -= valor;
        cout << "Saque de R$" << valor << " realizado com sucesso!" << endl;
    } else {
        cout << "Valor invalido para saque!" << endl;
    }
}

int main() {
    depositar(1000);
    sacar(200);
    consultarSaldo();
    return 0;
}
