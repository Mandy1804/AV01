#include <stdio.h>

// Função para verificar se o triângulo é retângulo
void verificar_triangulo_retangulo(int a, int b, int c) {
    int maior, lado1, lado2;

    // Determina o maior lado
    if (a >= b && a >= c) {
        maior = a;
        lado1 = b;
        lado2 = c;
    } else if (b >= a && b >= c) {
        maior = b;
        lado1 = a;
        lado2 = c;
    } else {
        maior = c;
        lado1 = a;
        lado2 = b;
    }

    // Verifica se o quadrado da hipotenusa é igual à soma dos quadrados dos outros dois lados
    if (maior * maior == lado1 * lado1 + lado2 * lado2) {
        printf("O triângulo é retângulo.\n");
    }
}

// Função principal
int main() {
    int a, b, c;

    // Solicita ao usuário os três lados
    printf("Digite o primeiro lado: ");
    scanf("%d", &a);
    printf("Digite o segundo lado: ");
    scanf("%d", &b);
    printf("Digite o terceiro lado: ");
    scanf("%d", &c);

    // Verifica se o triângulo é retângulo
    verificar_triangulo_retangulo(a, b, c);

    return 0;
}
