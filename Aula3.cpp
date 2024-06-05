// Operadores aritméticos 

#include <iostream>

using namespace std;

int main (){
    // Recebendo dois números do usuário e somando
    int num1, num2;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "A soma dos dois número é: " << num1 + num2 << endl;

    // Recebendo um número do usuário e verificando se é par ou impar
    int num;
    cout << "Digite um número: ";
    cin >> num;
    if (num % 2 == 0){
        cout << "O número é par" << endl;
    } else {
        cout << "O número é impar" << endl;
    }

    // Recebendo um número do usuário e verificando se é positivo ou negativo
    cout << "Digite um número: ";
    cin >> num;
    if (num > 0){
        cout << "O número é positivo" << endl;
    } else if (num < 0){
        cout << "O número é negativo" << endl;
    } else {
        cout << "O número é zero" << endl;
    }

    // Somando dois números e verificando se o resultado é positivo ou negativo
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    if (num1 + num2 > 0){
        cout << "A soma dos dois números é positiva" << endl;
    } else if (num1 + num2 < 0){
        cout << "A soma dos dois números é negativa" << endl;
    } else {
        cout << "A soma dos dois números é zero" << endl;
    }

    return 0;
}