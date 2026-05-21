#include <stdio.h>
#include <math.h>

void menu() {

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Modulus\n");
    printf("8. Binary Conversion\n");
    printf("9. Exit\n");
}

void binaryConversion(int n) {
    int binary[32], i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int choice;
    double a, b, result;
    int x, y;

    while (1) {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a + b;
                printf("Result = %.2lf\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a - b;
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a * b;
                printf("Result = %.2lf\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);

                if (b != 0)
                    printf("Result = %.2lf\n", a / b);
                else
                    printf("Division by zero not allowed!\n");
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                result = pow(a, b);
                printf("Result = %.2lf\n", result);
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);

                if (a >= 0)
                    printf("Square Root = %.2lf\n", sqrt(a));
                else
                    printf("Invalid input!\n");
                break;

            case 7:
                printf("Enter two integers: ");
                scanf("%d %d", &x, &y);

                if (y != 0)
                    printf("Modulus = %d\n", x % y);
                else
                    printf("Division by zero not allowed!\n");
                break;

            case 8:
                printf("Enter a decimal number: ");
                scanf("%d", &x);
                binaryConversion(x);
                break;

            case 9:
                printf("Exiting Calculator...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}