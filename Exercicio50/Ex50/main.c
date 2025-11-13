#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL,"");
    int matriz[5][5];
    int n;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("Digite um número %d %d: \n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite um número: \n");
    scanf("%d", &n);
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(matriz[i][j] == n)
            {
                printf("Linha: %d, Coluna: %d", i+1, j+1);
            }
        }
    }


    return 0;
}
