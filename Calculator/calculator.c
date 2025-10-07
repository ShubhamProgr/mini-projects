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
            printf("A. Addition (+)\n");
            printf("B. Subtraction (-)\n");
            printf("C. Multiplication (x)\n");
            printf("D. Division (/)\n");
            printf("\nEnter your choice : ");
            scanf(" %c", &operator); 
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            switch (operator) {
                case 'A' || 'a':
                    printf("Result: %.2lf", num1 + num2);
                    break;
                case 'B' || 'b':
                    printf("Result: %.2lf", num1 - num2);
                    break;
                case 'C' || 'c':
                    printf("Result: %.2lf", num1 * num2);
                    break;
                case 'D' || 'd':
                    if (num2 != 0) {
                        printf("Result: %.2lf", num1 / num2);
                    } else {
                        printf("Error! Division by zero.");
                    }
                    break;
                default:
                    printf("Error! Invalid operator for this mode.");
                    break;
            }
            break; // End of case 1

        case 2:
            // --- Advanced Mode Logic ---
            printf("\nEnter an advanced operator (Power(^), Modulus(%%)): ");
            scanf(" %c", &operator);

            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            // The switch for operators is now directly inside case 2
            switch (operator) {
                case '^': // For power, e.g., 2 ^ 3 = 8
                    printf("Result: %.2lf", pow(num1, num2));
                    break;
                case '%': // For modulus (remainder)
                    if ((int)num2 != 0) {
                         // Note: Modulus requires integers
                         printf("Result (as integers): %d", (int)num1 % (int)num2);
                    } else {
                         printf("Error! Division by zero in modulus.");
                    }
                    break;
                default:
                    printf("Error! Invalid operator for this mode.");
                    break;
            }
            break; 
        default:
            printf("\nError! Invalid mode selected.");
            break;
    }

    printf("\n\nPress any key to exit...");
    getch();
    return 0;
}