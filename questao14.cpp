#include <iostream>
using namespace std;

void exibirVetor(int* vetor) {
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i << ": " << *(vetor + i) << endl;
    }
}

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};
    exibirVetor(numeros);
    return 0;
}
