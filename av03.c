#include <stdio.h>

// Função para verificar se o ano é bissexto
int verificar_bissexto(int ano) {
    // Verifica se o ano é divisível por 4
    if (ano % 4 == 0) {
        // Verifica se o ano é divisível por 100
        if (ano % 100 == 0) {
            // Verifica se o ano é divisível por 400
            if (ano % 400 == 0) {
                return 1; // Ano bissexto
            } else {
                return 0; // Não é bissexto
            }
        } else {
            return 1; // Ano bissexto
        }
    } else {
        return 0; // Não é bissexto
    }
}

// Função principal
int main() {
    int ano;

    // Solicita ao usuário o ano
    printf("Digite um ano: ");
    scanf("%d", &ano);

    // Verifica se o ano é bissexto e imprime o resultado
    if (verificar_bissexto(ano)) {
        printf("1\n");
    }

    return 0;
}
