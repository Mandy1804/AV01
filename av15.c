#include <stdio.h>

int main() {
    char moedaOrigem, moedaDestino;
    float valor, valorConvertido;

    // Solicita ao usuário a moeda de origem
    printf("Digite a moeda de origem (R para Real, D para Dólar, E para Euro): ");
    scanf(" %c", &moedaOrigem); // O espaço antes de %c é para consumir qualquer caractere de nova linha

    // Solicita ao usuário a moeda de destino
    printf("Digite a moeda de destino (R para Real, D para Dólar, E para Euro): ");
    scanf(" %c", &moedaDestino);

    // Solicita ao usuário o valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    // Calcula e exibe o valor convertido com base nas moedas informadas
    if (moedaOrigem == 'R') { // Moeda de origem é Real
        if (moedaDestino == 'D') {
            valorConvertido = valor * 0.19; // Real para Dólar
            printf("Valor convertido: %.2f USD\n", valorConvertido);
        } else if (moedaDestino == 'E') {
            valorConvertido = valor * 0.16; // Real para Euro
            printf("Valor convertido: %.2f EUR\n", valorConvertido);
        } else if (moedaDestino == 'R') {
            printf("Valor convertido: %.2f BRL\n", valor); // Real para Real (sem conversão)
        } else {
            printf("Erro: Moeda de destino inválida.\n");
        }
    } else if (moedaOrigem == 'D') { // Moeda de origem é Dólar
        if (moedaDestino == 'R') {
            valorConvertido = valor * 5.30; // Dólar para Real
            printf("Valor convertido: %.2f BRL\n", valorConvertido);
        } else if (moedaDestino == 'E') {
            valorConvertido = valor * 5.30 * 0.16; // Dólar para Euro via Real
            printf("Valor convertido: %.2f EUR\n", valorConvertido);
        } else if (moedaDestino == 'D') {
            printf("Valor convertido: %.2f USD\n", valor); // Dólar para Dólar (sem conversão)
        } else {
            printf("Erro: Moeda de destino inválida.\n");
        }
    } else if (moedaOrigem == 'E') { // Moeda de origem é Euro
        if (moedaDestino == 'R') {
            valorConvertido = valor * 6.20; // Euro para Real
            printf("Valor convertido: %.2f BRL\n", valorConvertido);
        } else if (moedaDestino == 'D') {
            valorConvertido = valor * 6.20 * 0.19; // Euro para Dólar via Real
            printf("Valor convertido: %.2f USD\n", valorConvertido);
        } else if (moedaDestino == 'E') {
            printf("Valor convertido: %.2f EUR\n", valor); // Euro para Euro (sem conversão)
        } else {
            printf("Erro: Moeda de destino inválida.\n");
        }
    } else {
        printf("Erro: Moeda de origem inválida.\n");
    }

    return 0;
}
