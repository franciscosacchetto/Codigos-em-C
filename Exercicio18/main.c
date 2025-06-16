#include <stdio.h>
#include <stdlib.h>

void inverter(int *pa, int *pb)
{
    int medio = *pa;
    *pa = *pb;
    *pb = medio;
}

int main()
{
    int a, b;
    int *pa, *pb;
    pa = &a;
    pb = &b;

    printf("🔢 Digite o primeiro valor:\n");
    scanf("%d", &a);

    printf("🔁 Digite o segundo valor:\n");
    scanf("%d", &b);

    inverter(pa, pb);

    printf("🔄 Após a inversão:\n");
    printf("📍 a = %d, b = %d\n", *pa, *pb);

    return 0;
}
