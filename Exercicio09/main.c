#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inverso[6];
    int versu;

    for(int i = 0; i < 6; i++)
    {
        printf("🔢 Digite um número para o vetor:\n");
        scanf("%d", &inverso[i]);
    }

    for(int a = 0, f = 5; a < f; a++, f--)
    {
        versu = inverso[a];
        inverso[a] = inverso[f];
        inverso[f] = versu;
    }

    printf("🔁 Vetor invertido: ");
    for(int y = 0; y < 6; y++)
    {
        printf("%d ", inverso[y]);
    }

    return 0;
}
