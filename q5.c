#include <stdio.h>
#include <time.h>
int main() {

    int x1,y1,x2,y2;
    printf("enter x1:");
    scanf("%d",&x1);
    printf("enter y1:");
    scanf("%d",&y1);
    srand(time(NULL));
    x2 =(rand()%100)+1;
    printf("x2 is %d\n",x2);
    y2 =(rand()%100)+1;
    printf("y2 is %d\n",y2);
    if(x1 == x2 && y1 != y2){
        printf("HORIZONTAL");
    }
    if(y1 == y2 && x1 != x2){
        printf("vertical");
    }
    if(y1 == y2 && x1 == x2){
        printf("surprise");
    }
    else{
        printf("try again");
    }
    return 0;
}
