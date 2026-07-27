#include <stdio.h>
int main()
{
    int a[5], n, i, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d", i + 1);
            return 0;
        }
    }
    printf("Element not found");
    return 0;
}