#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int fatorial(int N)
{
    if(N == 0)
    {
        return 1;
    }
    else
    {
        return N *fatorial(N - 1);
    }
}
int main()
{
    setlocale(LC_ALL,"");
    int n;
    printf("Digite um número: \n");
    scanf("%d", &n);
    fatorial(n);
    printf("%d", fatorial(n));
    return 0;
}
