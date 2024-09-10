#include <stdio.h>

int main() {
    int turno;

    // Solicita ao usuário o número correspondente ao turno
    printf("Digite o número do turno (1 para manhã, 2 para tarde, 3 para noite): ");
    scanf("%d", &turno);

    // Exibe a mensagem de boas-vindas com base no turno informado
    switch (turno) {
        case 1:
            printf("Bom dia! Espero que você tenha uma ótima manhã.\n");
            break;
        case 2:
            printf("Boa tarde! Espero que você esteja tendo uma tarde produtiva.\n");
            break;
        case 3:
            printf("Boa noite! Aproveite a sua noite e descanse bem.\n");
            break;
        default:
            printf("Erro: Turno inválido. Por favor, digite 1, 2 ou 3.\n");
            break;
    }

    return 0;
}
