#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: \n");
    scanf("%d", &x);
    if (x > 0)
        printf("Positive");
        if (x % 2 == 0)
            printf(" even");
        else
            printf(" odd");
    }
    else if (x < 0)
    {
        printf("Negative");
        if (x%2==0)
        printf("even");
        else
        printf("odd");
            return 0;
}