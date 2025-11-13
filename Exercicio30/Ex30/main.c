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
    struct carro carros[3];
    FILE *arquivo;
    arquivo = fopen("carros.txt", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a placa: ");
        fgets(carros[i].placa, 9, stdin);
        carros[i].placa[strcspn(carros[i].placa, "\n")] = '\0';
        getchar();
        printf("Digite a marca: ");
        fgets(carros[i].marca, 50, stdin);
        carros[i].marca[strcspn(carros[i].marca, "\n")] = '\0';
        printf("Digite o modelo: ");
        fgets(carros[i].modelo, 50, stdin);
        carros[i].modelo[strcspn(carros[i].modelo, "\n")] = '\0';
        printf("Digite a cor: ");
        fgets(carros[i].cor, 50, stdin);
        carros[i].cor[strcspn(carros[i].cor, "\n")] = '\0';
        printf("Digite o ano: ");
        scanf("%d", &carros[i].ano);
        getchar();
        fprintf(arquivo, "%s %s %s %s %d\n",
                carros[i].placa,
                carros[i].marca,
                carros[i].modelo,
                carros[i].cor,
                carros[i].ano);
    }
    fclose(arquivo);
    printf("\nDados salvos em 'carros.txt' com sucesso!\n");
    return 0;
}
