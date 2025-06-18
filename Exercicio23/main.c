#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + soma(n - 1);
}

int main()
{
    setlocale(LC_ALL,"");

    int N;
    printf("Digite um número para calcular a soma de todos os seus dígitos naturais 👇:\n");
    scanf("%d", &N);

    int resultado = soma(N);
    printf("A soma dos %d primeiros números naturais é %d ✅\n", N, resultado);

    return 0;
}
