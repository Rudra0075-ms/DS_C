#include <stdio.h>
int main() {
    int a[100][100], b[100][100], c[100][100];
    int i,j,k,r1,c1,r2,c2;
    printf("Enter rows of Mat A: ");
    scanf("%d", &r1);
    printf("Enter columns of Mat A: ");
    scanf("%d", &c1);
    printf("Enter rows of Mat B: ");
    scanf("%d", &r2);
    printf("Enter rows of Matrix B: ");
    scanf("%d", &c2);
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
	}
	 for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nProduct:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

