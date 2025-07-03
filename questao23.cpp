#ifndef FUNCOES_H
#define FUNCOES_H

#include <iostream>

inline void mostrarInfo() {
    std::cout << "Informacoes do sistema." << std::endl;
}

inline float calcularMedia(const int* vetor, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return static_cast<float>(soma) / tamanho;
}

#endif

#include "funcoes.h"

int main() {
    mostrarInfo();

    int valores[] = {10, 20, 30, 40, 50};
    float media = calcularMedia(valores, 5);

    std::cout << "Media: " << media << std::endl;

    return 0;
}

