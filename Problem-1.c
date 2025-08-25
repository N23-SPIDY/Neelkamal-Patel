#include <stdio.h>  // Included I/O header file for the interaction with keyboard and monitor like peripherals
#include <string.h> // Included String header files to use builtin functions like strcmp strlen etc.

struct Calculator { //created a structure with a double flot variable a and b and char array for selecting operations 
    double a, b;
    char operation[10]; 
};

double calculate(struct Calculator c) {  
    if (strcmp(c.operation, "add") == 0) { //comparing the string input with predifined string add to execute add section
        return c.a + c.b;
    } else if (strcmp(c.operation, "subtract") == 0) {  //comparing the string input with predifined string subtract to execute subtract section
        return c.a - c.b;
    } else if (strcmp(c.operation, "multiply") == 0) {   //comparing the string input with predifined string multiplication to execute multiplication section
        return c.a * c.b;
    } else if (strcmp(c.operation, "divide") == 0) {  //comparing the string input with predifined string divide to execute divide section
        if (c.b != 0) return c.a / c.b; // Checking the Error Division by zero "1/0"
        else {
            printf("Error: Division by zero\n");
            return 0;
        }
    } else {
        printf("Invalid Operation\n");  // if user enters wrong or different string as it is case sensitive
        return 0;
    }
}

int main() {
    struct Calculator c;
    printf("Enter first number: ");
    scanf("%lf", &c.a);     //take input as long float as double is used for the variables
    printf("Enter second number: ");
    scanf("%lf", &c.b);
    printf("Enter operation (add, subtract, multiply, divide): ");
    scanf("%s", c.operation);

    double result = calculate(c);   //returning the result value which is stored in calculate class with c reference variable .
    printf("Result = %.2lf\n", result);

    return 0;
}
