#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    // code here
    if(a>0){
        printf("Positive ");
    }
    else if(a<0){
        printf("Negative ");
    }
    else{
        printf("Zero");
    }
    return 0;
    
}