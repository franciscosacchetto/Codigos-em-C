#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct cliente
 {
     char nome[50];
     char endereco[50];
     int telefone;
 };

int main()
{
    setlocale(LC_ALL,"");

    struct cliente clientes[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Digite o seu nome: \n");
        fgets(clientes[i].nome, 50, stdin);
        clientes[i].nome[strcspn(clientes[i].nome, "\n")] = '\0';
        printf("Digite o seu endereço: \n");
        fgets(clientes[i].endereco, 50, stdin);
        clientes[i].endereco[strcspn(clientes[i].endereco, "\n")] = '\0';
        printf("Digite o seu telefone: \n");
        scanf("%d", &clientes[i].telefone);
        getchar();
    }
    printf("Lista de pessoas\n");
    for(int j = 0; j < 5; j++)
    {
        printf("Cliente %d\n", j + 1);
        printf("%s\n",clientes[j].nome);
        printf("%s\n",clientes[j].endereco);
        printf("%d\n",clientes[j].telefone);
    }
    return 0;
}
