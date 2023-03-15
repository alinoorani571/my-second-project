#include <stdio.h>

int main() {
    int a,b,c;
    a=3,b=5,c=90;
    if (a*b>c && b*c>a && a*c>b) {
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
