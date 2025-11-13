#include <stdio.h>
#include <stdlib.h>
int primo(int N, int divisor)
{
    if (divisor == 1)
    {
        return 1;
    }
    else if (N % divisor == 0)
    {
        return 0;
    }
    else
    {
        return primo(N, divisor - 1);
    }
}

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    primo(n,n-1);
    if (n <= 1)
    {
        printf("Não é primo\n");
    }
    else if (primo(n, n - 1))
    {
        printf("É primo\n");
    }
    else
    {
        printf("Não é primo\n");
    }

    return 0;
}
