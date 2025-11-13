#include <stdio.h>
#include <stdlib.h>

int contadigitospares(int N)
{
    if(N == 0)
    {
        return 0;
    }
    else if(N%2 == 0)
    {
        return N + contadigitospares(N - 1);
    }
    else
    {
        return contadigitospares(N-1);
    }
}

int main()
{
    int n;
    printf("Digite um número: \n");
    scanf("%d", &n);
    printf("%d\n", contadigitospares(n));
    return 0;
}
