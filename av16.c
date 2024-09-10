#include <stdio.h>

int main() {
    float nota;

    // Solicita ao usuário a nota final do aluno
    printf("Digite a nota final do aluno (0 a 10): ");
    scanf("%f", &nota);

    // Verifica e exibe a classificação com base na nota
    if (nota < 0 || nota > 10) {
        // Nota fora do intervalo permitido
        printf("Erro: Nota fora do intervalo de 0 a 10.\n");
    } else if (nota >= 9.0) {
        // Nota entre 9.0 e 10.0
        printf("Classificação: A\n");
    } else if (nota >= 7.0) {
        // Nota entre 7.0 e 8.9
        printf("Classificação: B\n");
    } else if (nota >= 5.0) {
        // Nota entre 5.0 e 6.9
        printf("Classificação: C\n");
    } else {
        // Nota abaixo de 5.0
        printf("Classificação: D\n");
    }

    return 0;
}
