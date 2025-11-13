#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int vetor[10];
    float soma = 0;
    float media;
    for(int i = 0; i < 10; i++)
    {
        printf("Digite o número: \n");
        scanf("%d",&vetor[i]);
    }

    for(int i = 0; i < 10; i++)
    {
       soma = vetor[i] + soma;
    }
    media = soma/10;
    printf("%.2f",media);
    return 0;
}
