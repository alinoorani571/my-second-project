#include <stdio.h>

int main() {
    float h; //h is hight
    printf("enter h (m):");
    scanf("%f",&h);
    float w; //w is weight
    printf("enter w (kg):");
    scanf("%f",&w);
    float BMI=w/(h*h);
    printf("YOUR BMI IS %f \n",BMI);
    if(BMI<18.5){
        printf("UNDER WEIGHT");
        return 0;
    }
    if(BMI>18.5 && BMI<24.9){
        printf("NORMAL WEIGHT");
        return 0;
    }
    if(BMI>25 && BMI<29.9){
        printf("OVER WEIGHT");
        return 0;
    }
    if(BMI>30 && BMI<34.9){
        printf("OBESITY");
        return 0;
    }
    if(BMI>35 && BMI<39.9){
        printf("EXTREME OBESITY");
    }
}
