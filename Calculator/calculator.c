#include <stdio.h>
#include <math.h> 

int main() {
int mode;
char operator;
double num1, num2;

printf("Select Calculator Mode:\n");
printf("1. Basic Arithmetic\n");
printf("2. Advanced Operations\n");
printf("-------------------------------------\n");
printf("Enter your choice : ");
scanf("%d", &mode);

switch (mode) {
    case 1:
        printf("\n Basic Arithmetic Mode ");
        printf("-------------------------------------\n");
        printf("A. Addition\n");
        printf("B. Subtraction\n");
        printf("C. Multiplication\n");
        printf("D. Division\n");
        printf("E. Power\n");
        printf("F. Remainder\n");

        printf("\nEnter your choice : ");
        scanf(" %c", &operator);

        printf("Enter first operand : ");
        scanf("%lf", &num1);
        printf("Enter second operand : ");
        scanf("%lf",&num2);

        switch (operator) {
            case 'A':
            case 'a':
                printf("Result: %.2lf", num1 + num2);
                break;

            case 'B':
            case 'b':
                printf("Result: %.2lf", num1 - num2);
                break;

            case 'C':
            case 'c':
                printf("Result: %.2lf", num1 * num2);
                break;

            case 'D':
            case 'd':
                if (num2 != 0) {
                    printf("Result: %.2lf", num1 / num2);
                } else {
                    printf("Error! Division by zero.");
                }
                break;

            case 'E':
            case 'e':
                printf("Result: %.2lf", pow(num1, num2));
                break;

            case 'F':
            case 'f':
                if (num2 != 0) {
                    printf("Result: %.2lf", fmod(num1, num2));
                } else {
                    printf("Error! Division by zero.");
                }
                break;

            default:
                printf("Error! Invalid operator for this mode.");
                break;
        }
    
    case 2:
        printf("\nAdvanced Operations Mode");
        printf("\n-------------------------------------");
        printf("A. Square Root\n");
        printf("B. Factorial\n");
        
        printf("\nEnter your choice : ");
        scanf(" %c", &operator);

        switch (operator) {
            case 'A':
            case 'a':
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    printf("Result: %.2lf", sqrt(num1));
                } else {
                    printf("Error! Square root of negative number.");
                }
                break;

            case 'B':
            case 'b': 
             
            default:
                printf("Error! Invalid operator for this mode.");
                break;

            }
default:
    printf("Error! Invalid operator choice.");
    break;

printf("\nPress any key to exit...");
return 0;

}
   
}