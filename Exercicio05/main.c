#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media(float n1, float n2, float n3);

int main()
{
    setlocale(LC_ALL,"");

    float N1, N2, N3;
    printf("📊 Digite três números para calcular a média:\n");
    scanf("%f %f %f",&N1,&N2,&N3);
    printf("✅ A média é %.2f\n", media(N1,N2,N3));

    return 0;
}

float media(float n1, float n2, float n3)
{
    float r;
    r = (n1 + n2 + n3) / 3;
    return r;
}
