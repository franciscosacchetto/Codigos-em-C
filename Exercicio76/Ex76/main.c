#include <stdio.h>

void troca(int *p, int *t)
{
    int temp;
    temp = *p;
    *p = *t;
    *t = temp;
}

int main()
{
    int n, k;

    printf("Valores:\n");
    scanf("%d %d", &n, &k);

    printf("Antes da troca: n = %d, k = %d\n", n, k);

    troca(&n, &k);

    printf("Depois da troca: n = %d, k = %d\n", n, k);

    return 0;
}
