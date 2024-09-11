#include <stdio.h>

void verificarTriangulo(int a, int b, int c) {
   
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("1\n"); 
    }
  
}

int main() {
    int lado1, lado2, lado3;

    printf("Digite o valor dos três lados do triângulo:\n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    verificarTriangulo(lado1, lado2, lado3);

    return 0;
}