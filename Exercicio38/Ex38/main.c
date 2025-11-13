#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int vetor[20];
    int contp = 0, conti = 0;
    for(int i = 0; i < 20; i++)
    {
        printf("Digite o número: \n");
        scanf("%d",&vetor[i]);
        if(vetor[i] %2 == 0)
        {
          contp ++;
        }
        else
        {
           conti ++;
        }
    }
        printf("pares=%d, impares=%d", contp, conti);
    return 0;
}
