// Example program
#include <iostream>
using namespace std;

int main()
{
    float raio, area;
    const float PI = 3.14;
  
    cout << "informe o valor do raio do circulo"<<endl ;
    cin >> raio;
    area = PI * raio*raio;
    
    cout <<"Area do circulo e "<< area <<endl;
    return 0;
}
