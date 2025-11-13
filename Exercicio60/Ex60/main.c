#include <stdio.h>

int inverter(int n, int invertido)
{
    if (n == 0)
        return invertido;
    else
        return inverter(n / 10, invertido * 10 + (n % 10));
}

int ehPalindromo(int n)
{
    int invertido = inverter(n, 0);
    return (invertido == n);
}

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    if (ehPalindromo(n))
        printf("%d é um palíndromo!\n", n);
    else
        printf("%d não é um palíndromo.\n", n);

    return 0;
}
