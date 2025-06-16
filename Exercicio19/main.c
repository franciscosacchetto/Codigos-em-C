#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int fatorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n - 1);
    }
}

int main()
{
    setlocale(LC_ALL,"");

    int N;
    printf("🔢 Digite um número para calcular o fatorial: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("❌ Não é possível calcular o fatorial de um número negativo!\n");
    } else {
        printf("📣 O fatorial de %d é: %d ✅\n", N, fatorial(N));
    }

    return 0;
}
