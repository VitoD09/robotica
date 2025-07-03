#include <iostream>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float altura;
};

void imprimirPessoa(Pessoa* p) {
    cout << "Nome: " << p->nome << endl;
    cout << "Idade: " << p->idade << " anos" << endl;
    cout << "Altura: " << p->altura << endl;
}

int main() {
    Pessoa pessoa = {"Ana", 25, 1.65};
    imprimirPessoa(&pessoa);
    return 0;
}
