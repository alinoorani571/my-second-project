#include <stdio.h>

int main() {
    int x;
    printf("enter a number:");
    scanf("%d", &x);
    if (x % 2 == 0) {
        printf("x is even");
    } else {
        printf("x is odd");
}
    return 0;
}
