#include <stdio.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    // Solicita ao usuário a operação desejada
    printf("Escolha a operação (+ para soma, - para subtração, * para multiplicação, / para divisão): ");
    scanf(" %c", &operacao);  // O espaço antes de %c é para consumir qualquer caractere de nova linha

    // Solicita ao usuário os dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Calcula o resultado com base na operação escolhida
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            // Verifica se o denominador é zero
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            // Caso a operação não seja reconhecida
            printf("Erro: Operação inválida.\n");
            break;
    }

    return 0;
}
