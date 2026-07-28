#include <stdio.h>
#define MAX 100
int n = 0;      

void insert_at_pos(int arr[]);
void delete_from_pos(int arr[]);
void traverse(int arr[]);
void merge(int arr[]);
void search(int arr[]);
int main()
{
    int arr[MAX];
    int choice;
	char ch;
    do
    {
        printf("\n====== MENU ======\n");
        printf("1. Insert at Specific Position\n");
        printf("2. Delete from Specific Position\n");
        printf("3. Search\n");
        printf("4. Mearge\n");
        printf("5. Traverse\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insert_at_pos(arr);
                break;

            case 2:
                delete_from_pos(arr);
                break;

            case 3:
                search(arr);
                break;

            case 4:
                merge(arr);
                break;
            case 5:
            	traverse(arr);
            	break;

            default:
                printf("Invalid Choice!\n");
        }

    	printf("Do you want to continue\n");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='Y' || ch=='y');

    return 0;
}


void insert_at_pos(int arr[])
{
    int pos, value, i;

    if(n == MAX)
    {
        printf("Array is Full!\n");
        return;
    }

    printf("Enter Position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid Position!\n");
    }
	else
	{
		printf("Enter Value: ");
    	scanf("%d", &value);

    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    printf("Element Inserted Successfully.\n");
	}
    
}


void delete_from_pos(int arr[])
{
    int pos, i;

    if(n == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    printf("Enter Position to Delete (1 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n)
    {
        printf("Invalid Position!\n");
    }
	else
	{
		for(i = pos - 1; i < n - 1; i++)
    	{
        arr[i] = arr[i + 1];
    	}

   		 n--;

    	printf("Element Deleted Successfully.\n");
	}
    
}

void search(int arr[])
{
    int key, i, found = 0;

    if(n == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at Position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found.\n");
}


void merge(int arr[])
{
    int arr2[MAX], m, i;

    printf("Enter number of elements in second array: ");
    scanf("%d", &m);

    printf("Enter %d elements:\n", m);

    for(i = 0; i < m; i++)
        scanf("%d", &arr2[i]);

    if(n + m > MAX)
    {
        printf("Cannot merge. Array Overflow!\n");
    }
	else
	{
		for(i = 0; i < m; i++)
        	arr[n + i] = arr2[i];
    	n = n + m;
    	printf("Arrays Merged Successfully.\n");
    	printf("Merged Array:\n");
    	for(i = 0; i < n; i++)
        	printf("%d ", arr[i]);
    	printf("\n");	
	}
    
}

void traverse(int arr[])
{
    int i;

    if(n == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    printf("Array Elements are: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
