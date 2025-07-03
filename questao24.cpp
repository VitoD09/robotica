#include <iostream>
using namespace std;

float calcularMedia(int* vetor, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += *(vetor + i);
    }
    return static_cast<float>(soma) / tamanho;
}

int main() {
    int numeros[10] = {5, 7, 9, 6, 4, 8, 2, 3, 10, 1};
    float media = calcularMedia(numeros, 10);
    cout << "Media: " << media << endl;
    return 0;
}
