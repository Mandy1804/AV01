#include <stdio.h>

void verificarPrimo(int num) {
  if (num < 2) {
    return;
  }
  if (num == 2 || num == 3) {
    printf("1\n");
    return;
  }
  if (num % 2 == 0 || num % 3 == 0) {
    return;
  }
  printf("1\n");
}
int main() {
  int num;

  printf("Digite um número entre 1 e 10: ");
  scanf("%d", &num);

  if (num < 1 || num > 10) {
    printf("Número fora do intervalo permitido.\n");
    return 1;
  }

  verificarPrimo(num);

  return 0;
}
