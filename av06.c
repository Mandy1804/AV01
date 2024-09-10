#include <stdio.h>

// Função para verificar a aprovação ou reprovação do aluno
void verificar_aprovacao(float nota) {
    if (nota >= 7) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
}

// Função principal
int main() {
    float nota;

    // Solicita ao usuário a nota
    printf("Digite a nota do aluno (0 a 10): ");
    scanf("%f", &nota);

    // Verifica a nota e exibe a mensagem
    verificar_aprovacao(nota);

    return 0;
}
