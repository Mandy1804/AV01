#include <stdio.h>

// Função para verificar se um número é par ou ímpar
void verificar_par_ou_impar(int numero) {
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }
}

// Função principal
int main() {
    int numero;

    // Solicita ao usuário o número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar
    verificar_par_ou_impar(numero);

    return 0;
}
