#include <stdio.h>
#include <stdlib.h>

int soman(int N)
{
    if(N == 1)
    {
        return 1;
    }
    else
    {
        return N + soman(N -1);
    }
}

int main()
{
    int n;
    printf("Digite um número: \n");
    scanf("%d", &n);
    printf("%d", soman(n));
    return 0;
}
