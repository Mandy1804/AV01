#include <stdio.h>

void verifano(int ano)
{

    if (ano % 4 || ano == 0) {
     
    }
        if (ano % 100 || ano == 0) {
    
            }
            if (ano % 400 || ano == 0) {
                printf("1\n");
                return;
            }
    else
       printf("1\n");
         
}


int main() 
    {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    verifano(ano);

    return 0;
}
