#include <stdio.h>

// Função para calcular o IRRF com base no salário bruto
void calcular_irrf(float salario) {
    float imposto;

    if (salario <= 2112.00) {
        // Até R$ 2.112,00: Isento
        imposto = 0.0;
    } else if (salario <= 2826.65) {
        // De R$ 2.112,01 até R$ 2.826,65
        imposto = salario * 0.075 - 158.40;
    } else if (salario <= 3751.05) {
        // De R$ 2.826,66 até R$ 3.751,05
        imposto = salario * 0.15 - 370.40;
    } else if (salario <= 4664.68) {
        // De R$ 3.751,06 até R$ 4.664,68
        imposto = salario * 0.225 - 651.73;
    } else {
        // Acima de R$ 4.664,68
        imposto = salario * 0.275 - 884.96;
    }

    // Exibe o valor do imposto
    printf("O valor do imposto de renda retido na fonte é: R$ %.2f\n", imposto);
}

// Função principal
int main() {
    float salario;

    // Solicita ao usuário o salário bruto
    printf("Digite o salário bruto: R$ ");
    scanf("%f", &salario);

    // Calcula e exibe o imposto de renda retido na fonte
    calcular_irrf(salario);

    return 0;
}
