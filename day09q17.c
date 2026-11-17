#include <stdio.h>
#include <math.h>

int main() {
    //for quadratic equation 
    float a, b, c, D;
    float root1, root2;
    printf("Enter value of a, b, c in quadratic(ax^2 + bx + c): ");
    scanf("%f %f %f",&a , &b, &c);
    if(a==0){
        printf("This is not a quadratic equation\n");
    }
    else{
        D = b * b - 4 * a * c;
    }
    if(D>0){
        root1 = (-b + sqrt(D)) / (2 *a);
        root2 = (-b - sqrt(D)) / (2 *a);
        printf("Roots are real and distinct\n");
        printf("Roots of quadratic equation are %.2f and %.2f\n", root1, root2);
    }
    else if(D<0){
        printf("Roots are imaginary\n");
    }
    else if(D==0){
        printf("Roots are real and equal\n");
        root1 = -b / (2 * a);
        printf("Root of quadratic equation is %.2f\n", root1);
    }

    return 0;
}