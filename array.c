#include <stdio.h>
#define MAX 100
int main()
{
    int a[MAX], b[MAX], n = 0, m, ch, pos, val, i, key;
    char c;
    do
    {
        printf("\n1.Insert 2.Delete 3.Search 4.Merge 5.Traverse\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: // Insert
            printf("Pos & Value: ");
            scanf("%d%d", &pos, &val);
            if (pos < 1 || pos > n + 1)
            {
                printf("Invalid Position\n");
                break;
            }
            for (i = n; i >= pos; i--)
                a[i] = a[i - 1];
            a[pos - 1] = val;
            n++;
            printf("Inserted Successfully\n");
            break;
        case 2: // Delete
            printf("Position: ");
            scanf("%d", &pos);
            if (pos < 1 || pos > n)
            {
                printf("Invalid Position\n");
                break;
            }
            for (i = pos - 1; i < n - 1; i++)
                a[i] = a[i + 1];
            n--;
            printf("Deleted Successfully\n");
            break;
        case 3: // Search
            printf("Element: ");
            scanf("%d", &key);
            for (i = 0; i < n; i++)
            {
                if (a[i] == key)
                {
                    printf("Found at Position %d\n", i + 1);
                    break;
                }
            }
            if (i == n)
                printf("Not Found\n");

            break;
        case 4: // Merge
            printf("Enter size of second array: ");
            scanf("%d", &m);

            printf("Enter %d elements:\n", m);
            for (i = 0; i < m; i++)
                scanf("%d", &b[i]);

            for (i = 0; i < m; i++)
                a[n + i] = b[i];
            n += m;
            printf("Merged Successfully\n");
            break;
        case 5: // Traverse
            if (n == 0)
            {
                printf("Array Empty\n");
            }
            else
            {
                printf("Array: ");
                for (i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
            }
            break;
        default:
            printf("Invalid Choice\n");
        }
        printf("Continue(y/n): ");
        scanf(" %c", &c);
    } while (c == 'y' || c == 'Y');
    return 0;
}
