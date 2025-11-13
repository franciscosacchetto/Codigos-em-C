#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
struct carro
{
    char placa[9];
    char marca[50];
    char modelo [50];
    char cor[50];
    int ano;
};
int main()
{
    setlocale(LC_ALL,"");
    struct carro carros[3];
    for(int i = 0; i < 3; i++)
    {
        printf("Digite a placa: \n");
        fgets(carros[i].placa, 9 , stdin);
        carros[i].placa[strcspn(carros[i].placa, "\n")] = '\0';
        printf("Digite a marca: \n");
        fgets(carros[i].marca, 50, stdin);
        carros[i].marca[strcspn(carros[i].marca, "\n")] = '\0';
        printf("Digite o modelo: \n");
        fgets(carros[i].modelo, 50 , stdin);
        carros[i].modelo[strcspn(carros[i].modelo, "\n")] = '\0';
        printf("Digite a cor: \n");
        fgets(carros[i].cor, 50, stdin);
        carros[i].cor[strcspn(carros[i].cor, "\n")] = '\0';
        printf("Digite o ano: \n");
        scanf("%d", &carros[i].ano);
        getchar();
    }
    printf("Lista\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%s\n",carros[i].placa);
        printf("%s\n",carros[i].marca);
        printf("%s\n",carros[i].modelo);
        printf("%s\n",carros[i].cor);
        printf("%d\n",carros[i].ano);
    }
    return 0;
}
