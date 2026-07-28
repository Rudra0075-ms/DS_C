#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int a[100][100], b[100][100], c[100][100];

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSum of the matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
