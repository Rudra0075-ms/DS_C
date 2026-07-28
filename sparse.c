#include <stdio.h>
int MAT[10][10], r, c, i, j, size = 0, SM[10][10], k = 0;
int main()
{
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &r, &c);
    printf("Enter %d elements\n", r * c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &MAT[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (MAT[i][j] != 0)
            {
                size++;
            }
        }
    }
    if (size < ((r * c) / 2))
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (MAT[i][j] != 0)
                {
                    SM[k][0] = i;
                    SM[k][1] = j;
                    SM[k][2] = MAT[i][j];
                    k++;
                }
            }
        }
    }
    else
    {
        printf("Not a sparse matrix\n");
    }
    printf("\nSparse Matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", MAT[i][j]);
        }
        printf("\n");
    }
    printf("Triplet Form\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", SM[i][j]);
        }
        printf("\n");
    }
    return 0;
}
