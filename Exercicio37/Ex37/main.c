#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int vetor[10];
    int menor;
    int maior;
    for(int i = 0; i < 10; i++)
    {
        printf("Digite o número: \n");
        scanf("%d",&vetor[i]);
        if(i == 0)
        {
           menor = vetor[i];
           maior = vetor[i];
        }
        else
        {
                if(vetor[i] < menor)
                {
                    menor = vetor[i];
                }
                else
                {
                    maior = vetor[i];
                }
        }
    }
    printf("menor=%d, maior=%d", menor, maior);
    return 0;
}
