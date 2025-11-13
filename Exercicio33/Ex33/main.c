#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct produto
{
    int codigo;
    char nome[50];
    float preco;
};

float media(struct produto produtos[], int totalprodutos)
{
     if (totalprodutos == 0) return 0.0;

    float soma = 0;
    for (int i = 0; i < totalprodutos; i++) {
        soma += produtos[i].preco;
    }
    return soma / totalprodutos;
}

int main()
{
    setlocale(LC_ALL,"");
    int SAIR = 0;
    struct produto produtos[100];
    int totalprodutos = 0;
    do
    {
        int Escolha;
        printf("1 - Digitar novo produto\n");
        printf("2 - Receber infos\n");
        printf("3 - Media de preço\n");
        scanf("%d", &Escolha);
        getchar();
        if(Escolha == 1)
        {
            int sair = 0;
            while(sair == 0)
            {
            printf("Digite o código: \n");
            scanf("%d", &produtos[totalprodutos].codigo);
            getchar();
            printf("Digite o nome: \n");
            fgets(produtos[totalprodutos].nome, 50, stdin);
            printf("Digite o preço: \n");
            scanf("%f", &produtos[totalprodutos].preco);
            getchar();

            printf("Código: %d\n", produtos[totalprodutos].codigo);
            printf("Nome: %s\n", produtos[totalprodutos].nome);
            printf("Preço: %.2f\n", produtos[totalprodutos].preco);

            totalprodutos ++;

            printf("Você deseja sair?(0 = não, 1 = sim)\n");
            scanf("%d", &sair);
            }

        }
        else if(Escolha == 2)
        {
            int sair = 0;
            while(sair == 0)
            {
                int codigoprodutoprocurado;
                printf("Digite o código do produto: \n");
                scanf("%d", &codigoprodutoprocurado);
                for(int i = 0; i < totalprodutos; i++)
                {
                    if(codigoprodutoprocurado == produtos[i].codigo)
                    {
                        printf("Seu produto é o %s\n", produtos[i].nome);
                    }
                    else
                    {
                        printf("Produto não encontrado");
                    }
                }
                printf("Você deseja sair?(0 = não, 1 = sim)\n");
                scanf("%d", &sair);
            }
        }
        else
        {
            float m = media(produtos, totalprodutos);
            if (m == 0.0)
            {
                printf("Nenhum produto cadastrado.\n");
            }
            else
            {
                    printf("A média dos preços dos produtos é: %.2f\n", m);
            }
        }
        printf("Deseja sair de tudo?(1=sim, 0=não) \n");
        scanf("%d", &SAIR);
    }while(SAIR != 1);
    return 0;
}
