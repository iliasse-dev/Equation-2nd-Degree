#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c,delta,x,x1,x2;
    printf("Enter the value of a: "),scanf("%f",&a);
    printf("Enter the value of b: "),scanf("%f",&b);
    printf("Enter the value of c: "),scanf("%f",&c);
    delta = (b*b)- (4*a*c);
    printf("The delta is: %f\n",delta);
    
    if (delta <0){
        printf("The equation don't have any solution in R\n");
        printf("End of Programm! By Iliasse Bousekine </>\n");
        return 0;
    }
    if (delta > 0){
        x1 = (-b - sqrt(delta))/(2 * a);
        x2 = (-b + sqrt(delta))/(2 * a);
        printf("The x1 is: %f\n",x1);
        printf("The x2 is: %f\n",x2);
        printf("End of Programm! By Iliasse Bousekine </>\n");
        return 0;
    }
    if (delta == 0){
        x = (-b)/(2 * a);
        printf("The equation have only one solution which is: %f\n",x);
        printf("End of Programm! By Iliasse Bousekine </>\n");
        return 0;
    }
    return 0;
}