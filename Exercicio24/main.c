#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int digitos(int n)
{
    if(n/10 == 0)
    {
        return 1;
    }
    else
    {
        return 1 + digitos(n/10);
    }
}

int main()
{
    setlocale(LC_ALL,"");

    int N;
    printf("🔢 Digite um número para descobrir quantos dígitos ele tem:\n👉 ");
    scanf("%d",&N);
    printf("📊 O número %d tem %d dígito(s)!\n", N, digitos(N));
    return 0;
}
