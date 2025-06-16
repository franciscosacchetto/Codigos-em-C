#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int *pa, *pb;
    pa = &a;
    pb = &b;

    printf("🔢 Digite o valor de a:\n");
    scanf("%d", &a);

    printf("🔢 Digite o valor de b:\n");
    scanf("%d", &b);

    c = *pa + *pb;

    printf("📍 Valor de a (via ponteiro): %d\n", *pa);
    printf("📍 Valor de b (via ponteiro): %d\n", *pb);
    printf("➕ Soma de a + b: %d\n", c);

    return 0;
}
