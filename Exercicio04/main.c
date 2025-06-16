#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int primo(int n);

int main()
{
    setlocale(LC_ALL,"");

    int N;
    printf("🔢 Digite um número para que eu possa definir se ele é primo ou não:\n");
    scanf("%d",&N);
    if (primo(N))
    {
        printf("✅ %d é primo!\n", N);
    }
    else
    {
        printf("❌ %d não é primo.\n", N);
    }
}

int primo(int n)
{
    for(int i = 2; i <= n - 1; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
