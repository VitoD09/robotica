#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int *ptr;    
    ptr = &num1;
    
    cout<< " Valor da variavel: "<<num1 <<endl;
    cout<<" Endereco da variavel: "<<ptr <<endl;
    return 0;
}

