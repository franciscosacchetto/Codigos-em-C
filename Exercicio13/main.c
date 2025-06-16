#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[2][2];
    printf("📝 Digite os elementos da matriz 2x2:\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("➡️ Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    return 0;
}
