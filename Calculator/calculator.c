#include <stdio.h>
#include <math.h> 

int mode;
char operator;
double num1, num2;

sum(num1,num2) {

    printf("\nEnter first operand : ");
    scanf("%lf",&num1);
    printf("\nEnter second operand : ");
    scanf("%lf",&num2);
    printf("Result: %.2lf", num1 + num2);

}

int main() {

printf("\n-------------------------------------");
printf("\nSelect Calculator Mode:");
printf("\n-------------------------------------");
printf("\n1. Basic Arithmetic");
printf("\n2. Advanced Operations");
printf("\n3. Matrix");
printf("\n4. Exit");
printf("\n-------------------------------------");
printf("\nEnter your choice : ");
scanf("%d", &mode);
printf("\n-------------------------------------");

switch (mode) {
    case 1:
        printf("\n-------------------------------------");
        printf("\n Basic Arithmetic Mode ");
        printf("\n-------------------------------------");
        printf("\nA. Addition");
        printf("\nB. Subtraction");
        printf("\nC. Multiplication");
        printf("\nD. Division");
        printf("\nE. Power");
        printf("\nF. Remainder");
        printf("\nG. Square root");
        printf("\n-------------------------------------");
        printf("\nEnter your choice : ");
        scanf(" %c", &operator);
        printf("\n-------------------------------------");

        switch (operator) {
            case 'A':
            case 'a':
                sum(num1,num2);
                break;

            case 'B':
            case 'b':
                printf("\nEnter first operand : ");
                scanf("%lf",&num1);
                printf("\nEnter second operand : ");
                scanf("%lf",&num2);  
                printf("Result: %.2lf", num1 - num2);
                break;

            case 'C':
            case 'c':
                printf("\nEnter first operand : ");
                scanf("%lf",&num1);
                printf("\nEnter second operand : ");
                scanf("%lf",&num2);
                printf("Result: %.2lf", num1 * num2);
                break;

            case 'D':
            case 'd':
                printf("\nEnter first operand : ");
                scanf("%lf",&num1);
                printf("\nEnter second operand : ");
                scanf("%lf",&num2);
                if (num2 != 0) {
                    printf("Result: %.2lf", num1 / num2);
                } else {
                    printf("Error! Division by zero.");
                }
                break;

            case 'E':
            case 'e':
                printf("\nEnter the base : ");
                scanf("%lf",&num1);
                printf("\nEnter the power : ");
                scanf("%lf",&num2);
                printf("Result: %.2lf", pow(num1, num2));
                break;

            case 'F':
            case 'f':
                printf("\nEnter first operand : ");
                scanf("%lf",&num1);
                printf("\nEnter second operand : ");
                scanf("%lf",&num2);
                if (num2 != 0) {
                    printf("Result: %.2lf", fmod(num1, num2));
                } else {
                    printf("Error! Division by zero.");
                }
                break;

            case 'G':
            case 'g':
                printf("\nSquare root of : ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    printf("Result: %.2lf", sqrt(num1));
                } else {
                    printf("Error! Square root of negative number.");
                }
                break;

            default:
                printf("Error! Invalid operator for this mode.");
                break;
        }
    
    case 2:
        printf("\n-------------------------------------");
        printf("\nAdvanced Operations Mode");
        printf("\n-------------------------------------");
        printf("\nA. Factorial");
        printf("\nB.");
        printf("\n-------------------------------------");
        printf("\nEnter your choice : ");
        scanf(" %c", &operator);
        printf("\n-------------------------------------");

        switch (operator) {
            case 'A':
            case 'a':
                printf("Enter the number you want factorial of: ");
                scanf("%lf", &num1);
                if (num1 < 0) {
                    printf("Error! Factorial is not defined for negative numbers or non-integers.");
                } else {
                    double factorial = 1;
                    for (int i = 1; i <= (int)num1; i++) {
                        factorial *= i;
                    }
                    printf("Result: %.0lf", factorial);
                }

            case 'B':
            case 'b': 

            default:
                printf("Error! Invalid operator for this mode.");
                break;

            }

    case 3:
        break;

    case 4:
        break;
default:
    printf("Error! Invalid operator choice.");
    break;

return 0;

}
   
}