#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL,"");
    int matriz[5][5];
    int soma1 =0;
    int soma2 =0;
    for(int i = 0; i < 5; i++)
        {
        for(int j = 0; j < 5; j++)
            {
                printf("Digite o elemento %d %d: \n", i+1,j+1);
                scanf("%d", &matriz[i][j]);
            }
        }
    printf("Diagonal principal\n");
    for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
                {
                    if(i == j)
                    {
                        soma1 = matriz[i][j] + soma1;
                    }
                }
        }
    printf("%d\n", soma1);
    printf("Diagonal secundária\n");
    for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
                {
                    if(j+i == 4)
                    {
                        soma2 = matriz[i][j] + soma2;
                    }
                }
        }
    printf("%d\n", soma2);

    return 0;
}
