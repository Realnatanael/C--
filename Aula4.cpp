// Operadores Lógicos

#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 10;
    int c = 15;

    // Operador AND
    if (a < b && b < c) {
        cout << "A é menor que B e B é menor que C" << endl;
    }

    // Operador OR
    if (a < b || b > c) {
        cout << "A é menor que B ou B é maior que C" << endl;
    }

    // Operador NOT
    if (!(a < b)) {
        cout << "A não é menor que B" << endl;
    }

    return 0;
}