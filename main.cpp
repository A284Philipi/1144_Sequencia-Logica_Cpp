#include <iostream>

using namespace std;

int main()
{
    int quadrado, cubo, numero = 1, a;
    cin >> a;
    while (numero <= a){
        cubo = numero * numero * numero;
        quadrado = numero * numero;
        cout << numero << " " << quadrado << " " << cubo <<endl;
        cout << numero << " " << quadrado+1 << " " << cubo+1 <<endl;
        numero++;
    }
    return 0;
}
