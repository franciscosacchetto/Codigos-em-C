#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL,"");

    int n;
    printf("Digite um número: \n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        for( int j = 0; j < n; j++)
        {
            if(i == j)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
