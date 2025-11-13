#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int vetor[10];
    int semRepetidos[10];
    int tamanhoNovo = 0;
    int repetido;
    for(int i = 0; i < 10; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        repetido = 0;
        for(int j = 0; j < tamanhoNovo; j++)
        {
            if(vetor[i] == semRepetidos[j])
            {
                repetido = 1;
                break;
            }
        }
        if(!repetido)
        {
            semRepetidos[tamanhoNovo] = vetor[i];
            tamanhoNovo++;
        }
    }
    printf("\nVetor sem elementos repetidos:\n");
    for(int i = 0; i < tamanhoNovo; i++)
    {
        printf("%d ", semRepetidos[i]);
    }
    printf("\n");
    return 0;
}
