#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL,"");
    int matriz[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Digite o elemento %d %d: \n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
