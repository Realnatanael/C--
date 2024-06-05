// Aula 2: Variáveis e Tipos de Dados

#include <iostream>

using namespace std;

int main() {
    // Declarando uma variável do tipo inteiro
    int minhaIdade = 22;

    // Declarando uma variável do tipo ponto flutuante
    float meuPeso = 47.5;

    // Declarando uma variável do tipo duplo ponto flutuante
    double meuSalario = 1000.50;

    // A principal diferença entre float e double é a precisão, ou seja, a quantidade de casas decimais que podem ser armazenadas
    // float: 7 casas decimais
    // double: 15 casas decimais
    // Isso é bastante importante para aplicações que envolvem cálculos matemáticos	
    // Por exemplo, se você estiver trabalhando com dinheiro, é melhor usar double
    // Agora se você estiver trabalhando com medidas de distância, float é suficiente

    // Declarando uma variável do tipo booleano
    bool souMaiorDeIdade = true;

    // Declarando uma variável do tipo caractere
    char meuSexo = 'M';

    // Declarando uma variável do tipo string
    string meuNome = "Natanael";

    // Existe uma variável do tipo void
    // void é um tipo de dado que não retorna valor
    // void é usado principalmente em funções
    // void é um tipo de dado que não tem valor
    // void é um tipo de dado que não tem tipo
    // void é um tipo de dado que não tem tamanho
    // void é um tipo de dado que não tem nada
    // void é um tipo de dado que não tem nada mesmo

    // Imprimindo as variáveis

    cout << "Minha idade: " << minhaIdade << endl;
    cout << "Meu peso: " << meuPeso << endl;
    cout << "Meu salário: " << meuSalario << endl;
    cout << "Sou maior de idade:  " << (souMaiorDeIdade ? "sim" : "não") << endl;

    // O valor de uma variável booleana é impresso como 1 para true e 0 para false

    cout << "Meu sexo: " << meuSexo << endl;
    cout << "Meu nome: " << meuNome << endl;

    return 0;

}

// Para compilar o programa (Windows): g++ Aula2.cpp -o Aula2.exe