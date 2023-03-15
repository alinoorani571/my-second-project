#include <stdio.h>

int main() {
    float a,b,c,x1,x2;
    a=2 , b=4 , c=1;
    float del = (b*b)-(4*(a*c));
    if(del >= 0){
        x1=(-b+sqrt(del))/2*a;
        printf("x1 is %f\n",x1);
        x2=(-b-sqrt(del))/2*a;
        printf("x2 is %f",x2);
    }
    else{
        printf("no root");
    }
    return 0;
}
