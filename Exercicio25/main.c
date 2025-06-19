#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int pali(int n, int m)
{
    if(n == m)
    {
        return n;
    }
    else
    {
        return n % 10 + pali(n / 10, m);
    }
}

int main()
{
    setlocale(LC_ALL, "");

    int N;
    printf("🔍 Digite um número para verificar se ele é um palíndromo:\n👉 ");
    scanf("%d", &N);
    
    int inv = pali(N, inv);

    if(inv == N)
    {
        printf("✅ O número %d é um palíndromo! 🔄\n", N);
    }
    else
    {
        printf("❌ O número %d não é um palíndromo. 😕\n", N);
    }

    return 0;
}
