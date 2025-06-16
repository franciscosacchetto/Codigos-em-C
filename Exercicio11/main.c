#include <stdio.h>
#include <stdlib.h>

int main()
{
    int media[10];
    int soma = 0;
    int mediar = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("🔢 Digite um valor (%d/10):\n", i+1);
        scanf("%d", &media[i]);
    }

    for(int g = 0; g < 10; g++)
    {
        soma += media[g];
    }

    mediar = soma / 10;

    printf("📊 A média dos valores é: %d\n", mediar);

    return 0;
}
