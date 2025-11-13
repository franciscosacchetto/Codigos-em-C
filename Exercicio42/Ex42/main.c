#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int vet1[5];
    int vet2[5];
    int vetor[10];
    int k=0,j=0;
    printf("Vetor 1\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Digite um número(vetor 1): \n");
        scanf("%d", &vet1[i]);
    }
    printf("Vetor 2\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Digite um número(vetor 2): \n");
        scanf("%d", &vet2[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        if(i%2==0 || i == 0)
        {
            vetor[i] = vet2[j++];
        }
        else
        {
            vetor[i] = vet1[k++];
        }
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d", vetor[i]);
    }
    return 0;
}
