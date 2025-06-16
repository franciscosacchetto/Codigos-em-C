#include <stdio.h>
#include <stdlib.h>

int main() {
    int soma[10];
    int reu = 0;

    for(int i = 0; i < 10; i++) {
        printf("🔢 Digite um número do vetor:\n");
        scanf("%d", &soma[i]);
    }

    for(int a = 0; a < 10; a++) {
        reu += soma[a];
    }

    printf("🧮 A soma de todos os valores é: %d\n", reu);
    return 0;
}
