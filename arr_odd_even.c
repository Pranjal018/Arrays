#include <stdio.h>
#define size 10
int main()
{
    int even = 0, odd = 0, i, arr[size];
    for (i = 0; i < size; i++)
    {
        printf("enter a number to be checked:\n",size);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("even numbers=%d,odd numbers=%d\n", even, odd);
}
