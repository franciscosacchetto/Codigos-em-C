#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4];
    int matrizTransposta[4][4];

    printf("📝 Digite os elementos da matriz 4x4:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("➡️ Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n🔎 Matriz digitada:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matrizTransposta[j][i] = matriz[i][j];
        }
    }

    printf("\n🔄 Matriz Transposta:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d  ", matrizTransposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
