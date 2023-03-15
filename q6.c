#include <stdio.h>
#include <time.h>
int main() {
    int a , b;
    srand(time(NULL));
    a=(rand()%10)+1;
    b=(rand()%20)+1;
    if(b>1 && b<10){
        printf("right %d %d",a,b);
    }
    if(b>10 && b<20){
        printf("left %d %d",a,b);
    }

    return 0;
}
