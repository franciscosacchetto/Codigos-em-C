#include <stdio.h>
#include <stdlib.h>

int contadigitos(int N)
{
    if(N/10 == 0)
    {
        return 1;
    }
    else
    {
        return 1 + contadigitos(N/10);
    }
}

int main()
{
    int n;
    printf("Digite um número: \n");
    scanf("%d", &n);
    printf("%d\n", contadigitos(n));
    return 0;
}
