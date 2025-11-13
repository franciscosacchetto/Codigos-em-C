#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *p;
    printf("Digite o valor de n: \n");
    scanf("%d", &n);
    p = &n;
    printf("%d", *p);
    return 0;
}
