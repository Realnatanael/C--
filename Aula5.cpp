// Todos os tipos de dados em C++


#include <iostream>
#include <string>

int main(){
    // Tipos de dados primitivos:

        // inteiro padrão
        int a = 10; // 4 bytes de memória (32 bits) -2^31 até 2^31-1 (2.147.483.647) 
        // inteiro curto
        short int b = 10; // 2 bytes de memória (16 bits) -2^15 até 2^15-1 (32.767)
        // inteiro longo
        long int c = 10; // 4 bytes de memória (32 bits) -2^31 até 2^31-1 (2.147.483.647)
        // Note que o long int é o mesmo que int em alguns sistemas operacionais (32 bits), em outros é diferente (64 bits) por isso é melhor usar long int
        // inteiro longo longo
        long long int d = 10; // 8 bytes de memória (64 bits) -2^63 até 2^63-1 (9.223.372.036.854.775.807)
        // Porque usar short, long e long long?
        // O uso desses tipos de dados é para economizar memória, se você sabe que o valor que será armazenado
        // não será muito grande, você pode usar short, se você sabe que o valor será muito grande, você pode usar long long

        // Ponto flutuante
        float e = 10.5; // 4 bytes de memória (32 bits) 1.2E-38 até 3.4E+38 
        double f = 10.5; // 8 bytes de memória (64 bits) 2.3E-308 até 1.7E+308
        long double g = 10.5; // 12 bytes de memória (96 bits) 3.4E-4932 até 1.1E+4932 
        // A diferença entre float, double e long double é a precisão, float tem menos precisão, double tem mais precisão e long double tem mais precisão ainda
        // Usamos float para economizar memória, double para precisão e long double para precisão extrema

        // Caractere
        char h = 'a'; // 1 byte de memória (8 bits) -128 até 127
        // Caractere largo (Unicode)
        wchar_t i = L'a'; // 2 bytes de memória (16 bits) 0 até 65.535
        // Caractere multibyte
        char16_t j = u'a'; // 2 bytes de memória (16 bits) 0 até 65.535
        char32_t k = U'a'; // 4 bytes de memória (32 bits) 0 até 4.294.967.295
        // O caractere padrão é o char, mas se você for trabalhar com caracteres especiais, você pode usar wchar_t, char16_t e char32_t que são mais seguros e suportam mais caracteres diferentes que o char padrão 

        // Booleano
        bool l = true; // 1 byte de memória (8 bits) true ou false
        // O tipo de dado booleano é usado para armazenar valores lógicos, true ou false

        // Void
        // void m; // Não retorna nada
        // O tipo de dado void é usado para funções que não retornam nada

        
    // Modificadores de tipo de dados:

        // signed
        signed int n = 10; // 4 bytes de memória (32 bits) -2^31 até 2^31-1 (2.147.483.647)
        // O modificador signed é usado para números positivos e negativos

        // unsigned
        unsigned int o = 10; // 4 bytes de memória (32 bits) 0 até 2^32-1 (4.294.967.295)
        // O modificador unsigned é usado para números positivos

        // long
        long int p = 10; // 4 bytes de memória (32 bits) -2^31 até 2^31-1 (2.147.483.647)
        // O modificador long é usado para aumentar o tamanho do tipo de dado

        // short
        short int q = 10; // 2 bytes de memória (16 bits) -2^15 até 2^15-1 (32.767)
        // O modificador short é usado para diminuir o tamanho do tipo de dado
        // Aumentar e deminuir o tamanho do tipo de dado é útil para economizar memória e aumentar a precisão, muito usado em casos de vetores e matrizes grandes e em cálculos matemáticos


    // Tipos de dados compostos:

        // String
        std::string r = "Hello World"; // 1 byte de memória (8 bits) por caractere
        // O tipo de dado string é usado para armazenar texto

        // Array
        int s[5] = {1, 2, 3, 4, 5}; // 4 bytes de memória (32 bits) por inteiro
        // O tipo de dado array é usado para armazenar uma coleção de dados do mesmo tipo

        // Uma string é um array de caracteres
        char t[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // 1 byte de memória (8 bits) por caractere
        // O caractere '\0' é usado para indicar o final da string

        // Struct
        struct v {
            int x;
            float y;
        }; // 8 bytes de memória (64 bits) por variável
        // O tipo de dado struct conjunto de variáveis de diferentes tipos de dados em uma única variável 

        // Union
        union u {
            int x;
            float y;
        }; // 4 bytes de memória (32 bits) por variável
        // O tipo de dado union é usado para armazenar diferentes tipos de dados na mesma variável e economizar memória pois todos os tipos de dados compartilham o mesmo espaço de memória

        // Classes
            // Definidas pelo usuário com funções e variáveis dentro
        class MyClass {
            public:
                int x;
                void myFunction() {
                    std::cout << "Hello World";
                }
        }; // 4 bytes de memória (32 bits) por variável

    // Tipos de dados derivados:

        // Ponteiro
        int w = 10;
        int* x = &w; // 4 bytes de memória (32 bits) por ponteiro
        // O tipo de dado ponteiro é usado para armazenar o endereço de memória de uma variável

        // Referência
        int y = 10;
        int& z = y; // 4 bytes de memória (32 bits) por referência
        // O tipo de dado referência é usado para criar um alias para uma variável
        // A diferença entre ponteiro e referência é que o ponteiro pode ser nulo e a referência não pode ser nula
        // Enquanto o ponteiro armazena o endereço de memória da variável, a referência armazena o valor da variável, ela "apontra" para a variável

        // Função
            // blocos de código que executam uma tarefa específica e podem ser chamados em qualquer lugar do programa
            //void myFunction() {
            //    std::cout << "Hello World";
            //} 
            // 1 byte de memória (8 bits) por função

        // Enumeração (enum)
        enum Color {Red, Green, Blue}; // 4 bytes de memória (32 bits) por enumeração
        // Conjunto de constantes inteiras nomeadas
        // O enum seeve para criar um conjunto de constantes nomeadas, por exemplo, se você quiser criar um conjunto de cores, você pode usar o enum

        // Tipo de dado nulo (nullptr)
        int* aa = nullptr; // 4 bytes de memória (32 bits) por ponteiro
        // O tipo de dado nulo é usado para indicar que um ponteiro não aponta para nenhum endereço de memória

        // Tipo de dado auto
        auto ab = 10; // 4 bytes de memória (32 bits) por variável
        // O tipo de dado auto é usado para declarar variáveis sem especificar o tipo de dado, o compilador irá inferir o tipo de dado da variável

        // Tipo de dado decltype
        decltype(10) ac; // 4 bytes de memória (32 bits) por variável
        // O tipo de dado decltype é usado para declarar variáveis com o mesmo tipo de dado de outra variável
        // no exemplo acima, a variável ac terá o mesmo tipo de dado da variável 10

        //Imprimindo tudo que você aprendeu e seus tamanhos em bytes
        std::cout << "int: " << sizeof(a) << " bytes" << std::endl;
        std::cout << "short int: " << sizeof(b) << " bytes" << std::endl;
        std::cout << "long int: " << sizeof(c) << " bytes" << std::endl;
        std::cout << "long long int: " << sizeof(d) << " bytes" << std::endl;
        std::cout << "float: " << sizeof(e) << " bytes" << std::endl;
        std::cout << "double: " << sizeof(f) << " bytes" << std::endl;
        std::cout << "long double: " << sizeof(g) << " bytes" << std::endl;
        std::cout << "char: " << sizeof(h) << " bytes" << std::endl;
        std::cout << "wchar_t: " << sizeof(i) << " bytes" << std::endl;
        std::cout << "char16_t: " << sizeof(j) << " bytes" << std::endl;
        std::cout << "char32_t: " << sizeof(k) << " bytes" << std::endl;
        std::cout << "bool: " << sizeof(l) << " bytes" << std::endl;
        //std::cout << "void: " << sizeof(m) << " bytes" << std::endl;
        std::cout << "signed int: " << sizeof(n) << " bytes" << std::endl;
        std::cout << "unsigned int: " << sizeof(o) << " bytes" << std::endl;
        std::cout << "long int: " << sizeof(p) << " bytes" << std::endl;
        std::cout << "short int: " << sizeof(q) << " bytes" << std::endl;
        std::cout << "std::string: " << sizeof(r) << " bytes" << std::endl;
        std::cout << "int array: " << sizeof(s) << " bytes" << std::endl;
        std::cout << "char array: " << sizeof(t) << " bytes" << std::endl;
        std::cout << "struct: " << sizeof(v) << " bytes" << std::endl;
        std::cout << "union: " << sizeof(u) << " bytes" << std::endl;
        std::cout << "class: " << sizeof(MyClass) << " bytes " << std::endl;
        std::cout << "int pointer: " << sizeof(x) << " bytes" << std::endl;
        std::cout << "int reference: " << sizeof(z) << " bytes" << std::endl;
        std::cout << "enum: " << sizeof(Color) << " bytes" << std::endl;
        std::cout << "nullptr: " << sizeof(aa) << " bytes" << std::endl;
        std::cout << "auto: " << sizeof(ab) << " bytes" << std::endl;
        std::cout << "decltype: " << sizeof(ac) << " bytes" << std::endl;

    return 0;
       
}