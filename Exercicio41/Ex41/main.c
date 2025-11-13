#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void remover(int vetor[], int tamanho, int N)
{
    int j = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] != N)
        {
            vetor[j] = vetor[i];
            j++;
        }
    }
    printf("\nVetor após remoção:\n");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
int main()
{
    setlocale(LC_ALL,"");

    int vetor[10];
    int tamanho = 10;
    int n;
    for(int i = 0; i < tamanho; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("\nDigite um número para remover do vetor: ");
    scanf("%d", &n);
    remover(vetor, tamanho, n);
    return 0;
}
