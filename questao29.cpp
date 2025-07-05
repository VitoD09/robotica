#include <iostream>
using namespace std;

void trocar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void trocar(float* x, float* y) {
    float temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x = 5, y = 10;
    float a = 1.5, b = 3.2;

    cout << "Antes (int): x = " << x << ", y = " << y << endl;
    trocar(&x, &y);
    cout << "Depois (int): x = " << x << ", y = " << y << endl;

    cout << "\nAntes (float): a = " << a << ", b = " << b << endl;
    trocar(&a, &b);
    cout << "Depois (float): a = " << a << ", b = " << b << endl;

    return 0;
}