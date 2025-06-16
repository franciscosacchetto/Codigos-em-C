#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int q(int n);

int main()
{
    setlocale(LC_ALL,"");

    int N;
    printf("Digite um número para que eu possa verificar se é par ou ímpar 📲\n");
    scanf("%d",&N);
    q(N);
    return 0;
}

int q(int n){
    if(n%2 == 0){
        printf("✅ Par!\n");
    }
    else{
        printf("❌ Ímpar!\n");
    }
}
