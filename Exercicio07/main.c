#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i(int n);

int main()
{
    setlocale(LC_ALL,"");

    int N;
    printf("🔢 Escreva um número para que eu possa determinar quantos dígitos ele tem:\n");
    scanf("%d",&N);
    printf("📟 O número %d tem %d dígito(s).\n", N, i(N));
    return 0;
}

int i(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int c = 0;
    while(n > 0)
    {
        n /= 10;
        c++;
    }
    return c;
}
