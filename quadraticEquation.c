#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, disc, x1, x2;

    //--- Get Inputs From User ---
    printf("Enter The value of a: ");
    scanf("%f", &a);
    printf("\n");

    printf("Enter The value of b: ");
    scanf("%f", &b);
    printf("\n");

    printf("Enter The value of c: ");
    scanf("%f", &c);
    printf("\n");

    // --- compute discriminant and check the nature of roots --- 
    disc = ((b*b) - 4*a*c);

    if (disc < 0){
        printf("The equation has no real roots\n");
    } else if (disc == 0){
        printf("The equation has two real and equal roots\n");
    } else{
        printf("The equation has two real and distinct roots\n");
    }

    // --- calculate and output roots ---
    x1 = (-(b)+ sqrt(disc))/(2 * a);
    x2 = (-(b)- sqrt(disc))/(2 * a);

    printf("The value of x1: %f\n", x1);
    printf("The value of x2: %f\n", x2);

    return 0;

}