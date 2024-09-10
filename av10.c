#include <stdio.h>

// Função para calcular a contribuição ao INSS com base no salário bruto
void calcular_inss(float salario) {
    float contribuicao = 0.0;

    // Calcula a contribuição com base nas faixas de salário
    if (salario <= 1320.00) {
        contribuicao = salario * 0.075;
    } else if (salario <= 2571.29) {
        // Calcula contribuição para a faixa até R$ 1.320,00
        contribuicao = 1320.00 * 0.075;
        // Adiciona contribuição para o valor acima de R$ 1.320,00
        contribuicao += (salario - 1320.00) * 0.09;
    } else if (salario <= 3856.94) {
        // Calcula contribuição para as faixas anteriores
        contribuicao = 1320.00 * 0.075;
        contribuicao += (2571.29 - 1320.00) * 0.09;
        // Adiciona contribuição para o valor acima de R$ 2.571,29
        contribuicao += (salario - 2571.29) * 0.12;
    } else if (salario <= 7507.49) {
        // Calcula contribuição para as faixas anteriores
        contribuicao = 1320.00 * 0.075;
        contribuicao += (2571.29 - 1320.00) * 0.09;
        contribuicao += (3856.94 - 2571.29) * 0.12;
        // Adiciona contribuição para o valor acima de R$ 3.856,94
        contribuicao += (salario - 3856.94) * 0.14;
    } else {
        // Calcula contribuição para as faixas anteriores
        contribuicao = 1320.00 * 0.075;
        contribuicao += (2571.29 - 1320.00) * 0.09;
        contribuicao += (3856.94 - 2571.29) * 0.12;
        contribuicao += (7507.49 - 3856.94) * 0.14;
        // Adiciona contribuição para o valor acima de R$ 7.507,49
        // Aqui, o valor acima de R$ 7.507,49 não é considerado para o cálculo
    }

    // Exibe o valor da contribuição
    printf("O valor da contribuição ao INSS é: R$ %.2f\n", contribuicao);
}

// Função principal
int main() {
    float salario;

    // Solicita ao usuário o salário bruto
    printf("Digite o salário bruto: R$ ");
    scanf("%f", &salario);

    // Calcula e exibe a contribuição ao INSS
    calcular_inss(salario);

    return 0;
}
