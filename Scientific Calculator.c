#include <stdio.h>
#include <math.h>

// Function to perform addition
double add(double x, double y) {
    return x + y;
}

// Function to perform subtraction
double subtract(double x, double y) {
    return x - y;
}

// Function to perform multiplication
double multiply(double x, double y) {
    return x * y;
}

// Function to perform division
double divide(double x, double y) {
    if (y == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return x / y;
}

// Function to calculate square root
double squareRoot(double x) {
    if (x < 0) {
        printf("Error: Negative numbers cannot have a square root.\n");
        return 0;
    }
    return sqrt(x);
}

// Function to calculate trigonometric values
double trigonometry(char func, double angle) {
    // Convert degrees to radians as trigonometric functions expect radians
    double angleRad = angle * (M_PI / 180);
    
    if (func == 's') { // sine
        return sin(angleRad);
    } else if (func == 'c') { // cosine
        return cos(angleRad);
    } else if (func == 't') { // tangent
        return tan(angleRad);
    } else {
        printf("Error: Invalid trigonometric function.\n");
        return 0;
    }
}

int main() {
    int choice;
    double num1, num2, result;
    char trigFunc;
    int continueCalc = 1;

    while (continueCalc) {
        // Display the menu
        printf("\nSelect operation:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Square Root\n");
        printf("6. Trigonometric functions (sin, cos, tan)\n");
        
        printf("Enter choice (1/2/3/4/5/6): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;

            case 2:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;

            case 3:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;

            case 4:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = divide(num1, num2);
                if (num2 != 0) {
                    printf("Result: %.2f\n", result);
                }
                break;

            case 5:
                printf("Enter number for square root: ");
                scanf("%lf", &num1);
                result = squareRoot(num1);
                if (num1 >= 0) {
                    printf("Result: %.2f\n", result);
                }
                break;

            case 6:
                printf("Enter trigonometric function (s for sin, c for cos, t for tan): ");
                scanf(" %c", &trigFunc); // space before %c to catch any previous newline
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = trigonometry(trigFunc, num1);
                printf("Result: %.2f\n", result);
                break;

            default:
                printf("Invalid choice!\n");
        }

        // Ask if the user wants to continue
        printf("\nDo you want to perform another calculation? (1 for Yes, 0 for No): ");
        scanf("%d", &continueCalc);
    }

    return 0;
}
