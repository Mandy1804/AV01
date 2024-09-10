#include <stdio.h>

// Função para calcular e exibir o imposto
void calcular_imposto(float salario) {
    float imposto;
    
    if (salario > 5000) {
        // Se o salário for maior que 5000, o imposto é 20%
        imposto = salario * 0.20;
    } else {
        // Caso contrário, o imposto é 10%
        imposto = salario * 0.10;
    }
    
    // Exibe o valor do imposto
    printf("O valor do imposto a ser pago é: R$ %.2f\n", imposto);
}

// Função principal
int main() {
    float salario;
    
    // Solicita ao usuário o salário
    printf("Digite o salário: R$ ");
    scanf("%f", &salario);
    
    // Calcula e exibe o imposto
    calcular_imposto(salario);
    
    return 0;
}
