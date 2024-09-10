#include <stdio.h>

// Função para calcular o valor do IPTU com base no valor venal do imóvel
void calcular_iptu(float valor) {
    float iptu;

    // Calcula o IPTU com base nas faixas de valor venal
    if (valor <= 100000.00) {
        iptu = valor * 0.01; // 1% de alíquota
    } else if (valor <= 300000.00) {
        iptu = valor * 0.015; // 1,5% de alíquota
    } else if (valor <= 500000.00) {
        iptu = valor * 0.02; // 2% de alíquota
    } else {
        iptu = valor * 0.025; // 2,5% de alíquota
    }

    // Exibe o valor do IPTU
    printf("O valor do IPTU é: R$ %.2f\n", iptu);
}

// Função principal
int main() {
    float valor;

    // Solicita ao usuário o valor venal do imóvel
    printf("Digite o valor venal do imóvel: R$ ");
    scanf("%f", &valor);

    // Calcula e exibe o IPTU
    calcular_iptu(valor);

    return 0;
}
