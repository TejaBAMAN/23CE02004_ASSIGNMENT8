#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements in the array:");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (array + i));
    }
    for (int i = 1; i <= n / 2; i++)
    {
        int t = *(array + i - 1);
        *(array + i - 1) = *(array + n - i);
        *(array + n - i) = t;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(array + i));
    }
    return 0;
}
