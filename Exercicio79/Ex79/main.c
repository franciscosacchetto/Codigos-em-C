#include <stdio.h>
#include <string.h>

int main() {
    //Erros estão comentados
    int n;
    printf("Digite o numero de fileiras: \n");
    scanf("%d", &n);
    int aviao[n][6];
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0;j < 6;j++)
        {
            printf("Esta Ocupada[%d][%d]?(1 para ocupada e 0 para desocupada):  \n", i+1,j+1);
            scanf("%d", &aviao[i][j]);
        }
    }
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0;j < 6;j++)
        {
            printf("%d ", aviao[i][j]);

        }
        printf("\n");
    }
    //char letra[50]
    char letra;
    int contador = 0;
    printf("Qual coluna(letra) voce quer?:  \n");
    scanf(" %c", &letra);
    //if(letra != 'A' || letra != 'B' || letra != 'C' || letra != 'D' || letra != 'E' || letra != 'F')
    if(letra != 'A' && letra != 'B' && letra != 'C' && letra != 'D' && letra != 'E' && letra != 'F')
    {
        printf("Digite um valor valido");
    }
    else
    {
        if (letra == 'A')
        {
            for (int i = 0; i < n; i++)
            {
                //for(int j = 0)
                for(int j = 0; j ==0; j++)
                {
                    if (aviao[i][j] == 1)
                    {
                        contador++;
                    }
                }
            }
            printf("%d de assentos ocupados\n", contador);
        }
        else if (letra == 'B')
        {
            for (int i = 0; i < n; i++)
            {
                for(int j = 1; j == 1; j++)
                {
                    if (aviao[i][j] == 1)
                    {
                        contador++;
                    }
                }
            }
            printf("%d de assentos ocupados\n", contador);
        }
        else if (letra == 'C')
        {
            for (int i = 0; i < n; i++)
            {
                for(int j = 2; j == 2; j++)
                {
                    if (aviao[i][j] == 1)
                    {
                        contador++;
                    }
                }
            }
            printf("%d de assentos ocupados\n", contador);
        }
        else if (letra == 'D')
        {
            for (int i = 0; i < n; i++)
            {
                for(int j = 3; j == 3; j++)
                {
                    if (aviao[i][j] == 1)
                    {
                        contador++;
                    }
                }
            }
            printf("%d de assentos ocupados\n", contador);
        }
        else if (letra == 'E')
        {
            for (int i = 0; i < n; i++)
            {
                for(int j = 4; j == 4; j++)
                {
                    if (aviao[i][j] == 1)
                    {
                        contador++;
                    }
                }
            }
            printf("%d de assentos ocupados\n", contador);
        }
        else if (letra == 'F')
        {
            for (int i = 0; i < n; i++)
            {
                for(int j = 5; j == 5; j++)
                {
                    if (aviao[i][j] == 1)
                    {
                        contador++;
                    }
                }
            }
            printf("%d de assentos ocupados\n", contador);
        }

    }

    return 0;
}
