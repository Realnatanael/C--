#include <iostream>

using namespace std;

int main() {
    float num, resultado;
    char op, continuar = 's';

    cout << "Calculadora em C++" << endl;
    cout << "Digite o um número: ";
    cin >> resultado;  // Primeiro número vai para o resultado para iniciar as operações

    while (continuar == 's' || continuar == 'S') {
        cout << "Digite a operação (+, -, *, /): ";
        cin >> op;
        cout << "Digite o próximo número: ";
        cin >> num;

        switch (op) {
            case '+':
                resultado += num;
                break;
            case '-':
                resultado -= num;
                break;
            case '*':
                resultado *= num;
                break;
            case '/':
                if (num != 0) {
                    resultado /= num;
                } else {
                    cout << "Erro: Divisão por zero!" << endl;
                }
                break;
            default:
                cout << "Operação inválida!" << endl;
                break;
        }

        cout << "Resultado atual: " << resultado << endl;
        cout << "Deseja continuar? (s/n): ";
        cin >> continuar;
    }

    return 0;
}