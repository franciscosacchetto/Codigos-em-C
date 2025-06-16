#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int n1, int n2);

int main()
{   
    int N1, N2, r;
    setlocale(LC_ALL, "");
    printf("📢 Programa da Soma por função\n");
    printf("👉 Digite o primeiro número: \n");
    scanf("%d", &N1);
    printf("👉 Digite o segundo número: \n");
    scanf("%d", &N2);
    r = soma(N1, N2);
    printf("✅ O resultado dessa operação é %d\n", r);
    return 0;  
}

int soma(int n1, int n2)
{
    return n1 + n2;
}
