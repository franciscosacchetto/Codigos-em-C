#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mdc(int n1, int n2);

int main()
{
    setlocale(LC_ALL,"");

    int N1, N2;
    printf("🔢 Digite dois números para que eu possa calcular o MDC deles:\n");
    scanf("%d %d", &N1, &N2);
    printf("✅ O MDC de %d e %d é %d\n", N1, N2, mdc(N1, N2));
    return 0;
}

int mdc(int n1, int n2)
{
    int r = 1, menor = (n1 < n2) ? n1 : n2;
    for(int c = 1; c <= menor; c++)
    {
        if(n1 % c == 0 && n2 % c == 0)
        {
            r = c;
        }
    }
    return r;
}
