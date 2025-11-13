#include <stdio.h>
#include <locale.h>

int somaRecursiva(int vetor[], int n)
{
    if(n == 0)
        return 0;
    else
        return vetor[n-1] + somaRecursiva(vetor, n-1);
}

int main()
{
    setlocale(LC_ALL,"");
    int vetor[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    int total = somaRecursiva(vetor, 5);
    printf("A soma dos elementos do vetor é: %d\n", total);

    return 0;
}
