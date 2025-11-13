#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int vetor[10];
    int soma= 0;
    for(int i = 0; i < 10; i++)
    {
        printf("Digite o número: \n");
        scanf("%d",&vetor[i]);
    }

    for(int i = 0; i < 10; i++)
    {
       soma = vetor[i] + soma;
    }
    printf("%d",soma);
    return 0;
}
