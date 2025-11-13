#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
struct carro
{
    char placa[9];
    char marca[50];
    char modelo[50];
    char cor[50];
    int ano;
};
int main()
{
    setlocale(LC_ALL, "");
    struct carro carros[50];
    FILE *arquivo;
    int i = 0;
    arquivo = fopen("carros.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    while (fscanf(arquivo, "%s %s %s %s %d",
                  carros[i].placa,
                  carros[i].marca,
                  carros[i].modelo,
                  carros[i].cor,
                  &carros[i].ano) == 5)
    {
        i++;
    }

    fclose(arquivo);
    printf("\n=== Lista de Carros Lidos do Arquivo ===\n");
    for (int j = 0; j < i; j++)
    {
        printf("\nCarro %d:\n", j + 1);
        printf("Placa:  %s\n", carros[j].placa);
        printf("Marca:  %s\n", carros[j].marca);
        printf("Modelo: %s\n", carros[j].modelo);
        printf("Cor:    %s\n", carros[j].cor);
        printf("Ano:    %d\n", carros[j].ano);
    }

    return 0;
}
