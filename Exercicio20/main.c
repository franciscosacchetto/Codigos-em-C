#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fbn(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fbn(n - 1) + fbn(n - 2);
    }
}

int main()
{
    setlocale(LC_ALL,"");

    int N;
    printf("🔢 Quantos termos da sequência de Fibonacci você quer ver? ");
    scanf("%d", &N);

    printf("🧮 Sequência de Fibonacci com %d termos:\n", N);
    for (int i = 0; i < N; i++) {
        printf("%d ", fbn(i));
    }

    printf("✅\n");
    return 0;
}
