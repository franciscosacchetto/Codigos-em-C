#include <stdio.h>

int mdc(int a, int b)
{
    if (b == 0)
        return a;
    else
        return mdc(b, a % b);
}

int main()
{
    int x, y;
    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);

    printf("O MDC de %d e %d é %d\n", x, y, mdc(x, y));

    return 0;
}
