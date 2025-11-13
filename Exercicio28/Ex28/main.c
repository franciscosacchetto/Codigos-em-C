#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct endereco
{
    char rua[50];
    char bairro[50];
    char cidade[50];
    char estado[50];
    int numero;
};

struct cliente
 {
     char nome[50];
     struct endereco enderecos;
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

        printf("Digite o sua rua: \n");
        fgets(clientes[i].enderecos.rua, 50, stdin);
        printf("Digite o seu bairro: \n");
        fgets(clientes[i].enderecos.bairro, 50, stdin);
        printf("Digite o sua cidade: \n");
        fgets(clientes[i].enderecos.cidade, 50, stdin);
        printf("Digite o seu estado: \n");
        fgets(clientes[i].enderecos.estado, 50, stdin);
        printf("Digite seu número: \n");
        scanf("%d", &clientes[i].enderecos.numero);

        printf("Digite o seu telefone: \n");
        scanf("%d", &clientes[i].telefone);
        getchar();
    }
    printf("Lista de pessoas\n");
    for(int j = 0; j < 5; j++)
    {
        printf("Cliente %d\n", j + 1);
        printf("%s\n",clientes[j].nome);
        printf("%s\n",clientes[j].enderecos.rua);
        printf("%s\n",clientes[j].enderecos.bairro);
        printf("%s\n",clientes[j].enderecos.cidade);
        printf("%s\n",clientes[j].enderecos.estado);
        printf("%d\n",clientes[j].enderecos.numero);
        printf("%d\n",clientes[j].telefone);
    }
    return 0;
}
