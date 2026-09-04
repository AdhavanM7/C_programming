#include <stdio.h>

int main() {
    int a, b, optr;
    scanf("%d %d %d", &a, &b, &optr);

    if (optr == 1)
        printf("%d", a + b);
    else if (optr == 2)
        printf("%d", a - b);
    else if (optr == 3)
        printf("%d", a * b);
    else
        printf("Invalid Input");

    return 0;
}