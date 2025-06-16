#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("🔢 Digite um número para eu te dizer se ele é PAR ou ÍMPAR: ");
    scanf("%d", &n);
    
    if(n % 2 == 0) {
        printf("O número %d é PAR! \n", n);
    } else {
        printf("O número %d é ÍMPAR! \n", n);
    }

    return 0;
}
