#include <stdio.h>

int is_leap_year(int n) {
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (is_leap_year(n)) {
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}