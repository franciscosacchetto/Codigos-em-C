#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int MDC(int n1, int n2, int div)
{
    if(n1 % div == 0 && n2 % div == 0)
    {
        return div;
    }
    else
    {
        return MDC(n1, n2, div - 1);
    }
}

int main()
{
    setlocale(LC_ALL,"");

    int N1, N2;
    printf("Digite dois números para calcular o MDC 👇:\n");
    scanf("%d %d", &N1, &N2);

    int menor = (N1 < N2) ? N1 : N2;
    int resultado = MDC(N1, N2, menor);

    printf("O MDC de %d e %d é %d ✅\n", N1, N2, resultado);

    return 0;
}
