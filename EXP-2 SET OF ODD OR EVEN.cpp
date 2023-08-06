#include <stdio.h>
int main() 
{
    int numbers[100];  
    int n;            

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &numbers[i]);
    }

    printf("Odd numbers: ");
    for (int i = 0; i < n; i++) 
	{
        if (numbers[i] % 2 != 0) 
		{
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    printf("Even numbers: ");
    for (int i = 0; i < n; i++) 
	{
        if (numbers[i] % 2 == 0) 
		{
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}

