#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int matriz1[3][3];
    int matriz2[3][3];
    int matriz3[3][3];
    printf("Matriz 1\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0;j < 3; j++)
        {
            printf("Digite um número: \n");
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("Matriz 2\n");
     for(int i = 0; i < 3; i++)
    {
        for(int j = 0;j < 3; j++)
        {
            printf("Digite um número: \n");
            scanf("%d", &matriz2[i][j]);
        }
    }
     for(int i = 0; i < 3; i++)
    {
        for(int j = 0;j < 3; j++)
        {
           matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
      printf("Matriz Soma\n");
     for(int i = 0; i < 3; i++)
    {
        for(int j = 0;j < 3; j++)
        {
            printf("%d", matriz3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
