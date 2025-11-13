#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, iguais = 1;
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            iguais = 0;
            break;
        }
        i++;
    }

    if (str1[i - 1] == '\n' && str2[i - 1] == '\n') {
        str1[i - 1] = '\0';
        str2[i - 1] = '\0';
    }

    if (iguais)
        printf("As strings sao iguais.\n");
    else
        printf("As strings sao diferentes.\n");

    return 0;
}
