#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int n)
{
    if(n <= 0)
    {
        return 0;
    }
    if(n % 2 == 0)
    {
        return n + soma(n - 2);
    }
    else
    {
        return (n - 1) + soma(n - 2);
    }
}

int main()
{
    setlocale(LC_ALL,"");

    int N;
    printf("🔢 Digite um número inteiro para somar todos os pares até ele:\n👉 ");
    scanf("%d", &N);
    printf("🧮 A soma dos números pares até %d é: %d\n", N, soma(N));
    return 0;
}
