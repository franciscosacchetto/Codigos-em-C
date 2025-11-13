#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, j, **mat;
    scanf("%d %d", &n, &m);
    mat = malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
        mat[i] = malloc(m * sizeof(int));
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    for (i = 0; i < n; i++) free(mat[i]);
    free(mat);
    return 0;
}
