Algoritmo questao 15:
#include <iostream>
using namespace std;

int main() {
    float nota;
    float* ptrNota = &nota;

    cout << "Informe a nota: ";
    cin >> *ptrNota;

    if (*ptrNota >= 0 && *ptrNota <= 10) {
        if (*ptrNota >= 7) {
            cout << "Aluno foi aprovado" << endl;
        } else if (*ptrNota > 4) {
            cout << "Aluno vai pra prova final" << endl;
        } else {
            cout << "Aluno esta reprovado" << endl;
        }
    } else {
        cout << "Nota inválida" << endl;
    }

    return 0;
}
