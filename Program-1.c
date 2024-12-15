#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Calculator {
    double a;
    double b;
    double (*add)(double, double);
    double (*subtract)(double, double);
    double (*multiply)(double, double);
    double (*divide)(double, double);
};
double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        exit(EXIT_FAILURE);
    }
    return a / b;
}
int main() {
    struct Calculator calc;
    calc.add = add;
    calc.subtract = subtract;
    calc.multiply = multiply;
    calc.divide = divide;
    char operation[20];
    printf("Enter first number (a): ");
    scanf("%lf", &calc.a);
    printf("Enter second number (b): ");
    scanf("%lf", &calc.b);
    printf("Enter operation (add, subtract, multiply, divide): ");
    scanf("%s", operation);
    double result;
    if (strcmp(operation, "add") == 0) {
        result = calc.add(calc.a, calc.b);
    } else if (strcmp(operation, "subtract") == 0) {
        result = calc.subtract(calc.a, calc.b);
    } else if (strcmp(operation, "multiply") == 0) {
        result = calc.multiply(calc.a, calc.b);
    } else if (strcmp(operation, "divide") == 0) {
        result = calc.divide(calc.a, calc.b);
    } else {
        printf("Error: Invalid operation. Please enter add, subtract, multiply, or divide.\n");
        return 1;
    }
    
    printf("The result is: %.2lf\n", result);
    
    return 0;
}
