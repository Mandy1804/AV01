#include <stdio.h>

// Função para verificar se a pessoa é maior de idade
void verificar_idade(int idade) {
    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }
}

// Função principal
int main() {
    int idade;

    // Solicita ao usuário a idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Verifica a idade e exibe a mensagem
    verificar_idade(idade);

    return 0;
}

