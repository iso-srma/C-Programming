#include <stdio.h>  // Include standard input-output library

int main() {
    float num1, num2, result;  // Declare variables to store numbers and result

    // Prompt the user to enter two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);  // Read first number

    printf("Enter second number: ");
    scanf("%f", &num2);  // Read second number

    result = num1 * num2;  // Multiply the two numbers

    // Display the multiplication result
    printf("Multiplication result: %.2f\n", result);

    return 0;  // Return 0 to indicate successful execution
}
