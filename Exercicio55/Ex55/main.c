#include <stdio.h>
#include <stdlib.h>

int soma(int N)
{
    if(N/10 == 0)
    {
        return N;
    }
    else
    {
        return N%10 + soma(N/10);
    }
}

int main()
{
    printf("Hello world!\n");
    int n;
    printf("Digite um número: \n");
    scanf("%d", &n);
    printf("%d",soma(n));
    return 0;
}
