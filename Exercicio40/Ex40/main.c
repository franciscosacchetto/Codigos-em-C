#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int vetor[10];
    int temp;
    for(int i = 0; i < 10; i++)
    {
        printf("Digite o número: \n");
        scanf("%d",&vetor[i]);
    }
    for(int i = 0; i < 10/2; i++)
    {
        temp = vetor[i];
        vetor[i] = vetor[9-i];
        vetor[9-i] = temp;
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", vetor[i]);
    }
    printf("\n");
    return 0;
}
