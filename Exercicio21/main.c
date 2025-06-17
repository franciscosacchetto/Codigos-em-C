#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função recursiva para verificar se um número é primo
int primo(int n, int div)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    if (div == 1)
    {
        return 1;
    }
    if (n % div == 0)
    {
        return 0;
    }
    else
    {
        return primo(n, div - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "");

    int N;
    printf("🔢 Digite um número e eu vou te dizer se ele é primo ou não: ");
    scanf("%d", &N);

    if (primo(N, N - 1))
    {
        printf("✅ O número %d é **PRIMO**! 🎉\n", N);
    }
    else
    {
        printf("❌ O número %d **NÃO** é primo. 😢\n", N);
    }

    return 0;
}

