#include <stdio.h>

// Função para calcular o desconto de ICMS com base no valor do produto
void calcular_desconto(float valor) {
    float desconto;

    // Calcula o desconto com base nas faixas de preço
    if (valor <= 1000.00) {
        desconto = valor * 0.05;
    } else if (valor <= 5000.00) {
        desconto = valor * 0.10;
    } else {
        desconto = valor * 0.15;
    }

    // Exibe o valor do desconto
    printf("O valor do desconto de ICMS é: R$ %.2f\n", desconto);
}

// Função principal
int main() {
    float valor;

    // Solicita ao usuário o valor do produto
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    // Calcula e exibe o desconto de ICMS
    calcular_desconto(valor);

    return 0;
}
