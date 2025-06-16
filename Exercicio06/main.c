#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int pot(int n, int e);

int main()
{
    setlocale(LC_ALL,"");

    int N, E;
    printf("👉 Digite um número: \n");
    scanf("%d",&N);
    printf("📈 Agora, digite um expoente: \n");
    scanf("%d",&E);
    printf("✨ O número %d elevado a %d é igual a %d 🎉\n", N, E, pot(N, E));

    return 0;
}

int pot(int n, int e)
{
    int r;
    r = pow(n, e);
    return r;
}
