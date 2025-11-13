#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int vetor[10];
    int n;
    int presente = 0;
    for(int i = 0; i < 10; i++)
    {
        printf("Digite o número: \n");
        scanf("%d",&vetor[i]);
    }
    printf("Digite o valor de número: \n");
    scanf("%d", &n);
    for(int i = 0; i < 10; i++)
    {
        if(vetor[i] == n)
        {
            presente = 1;
            break;
        }
    }
    if(presente == 1)
        {
            printf("Presente\n");
        }
        else
        {
            printf("Não presente\n");
        }
    return 0;
}
