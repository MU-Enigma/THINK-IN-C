#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
This function evaluates the roots of a given quadratic equation.
Error handling included.
*/
int main () {
  //Good practice to declare all variables in the beginning
    int a, b, c;
    int times;
    printf("%s\n", "Welcome to Think In C.");   // printf("Welcome to Te=");
    printf("%s\n", "This code helps find the roots of a quadratic equation");
    printf("%s\n", "ax^2 + bx + c = 0");
    printf("%s", "Enter number of eaquations you want to evaluate: ");
    scanf("%d", &times);
    int input;
    for (int i = 0; i < times; i++) {
        printf("%s\n", "Enter in the format: a b c ");
        scanf("%d %d %d", &a, &b, &c);
        if (a<1) {
            input = 1;
        }
        //No harm in declaraing new variables in the middle of the code
        double D, root1, root2;
        D = pow(b,2) - 4*a*c;
        if (D<0) {
            input = 2;
        }

        switch (input) {
            case 1:            // Note: this is a colon, not a semicolon
                printf("%s\n", "Not A Quadratic Equation");
                break;
            case 2:
                printf("%s\n", "Roots are imaginary");
                break;
            default:
              root1 = ((-b + sqrt(D))/(2*(a)));
              root2 = ((-b - sqrt(D))/(2*(a)));
              printf("Roots are: %f , %f\n", root1, root2);
        }

    }
    return 0;
}
