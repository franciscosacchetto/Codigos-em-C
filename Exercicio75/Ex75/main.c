#include <stdio.h>

int main()
{
    int n;
    int *p;

    printf("Digite: ");
    scanf("%d", &n);

    p = &n;
    *p = *p * 2;

    printf("Dobro: %d\n", *p);

    return 0;
}
