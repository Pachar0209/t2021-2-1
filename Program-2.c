#include <stdio.h>
void generateSeries(int a) {
    int number = 1; 
    for (int i = 0; i < a; i++) {
        printf("%d", number);
        if (i < a - 1) {
            printf(", "); 
        }
        number += 2; 
    }
    printf("\n");
}
int main() {
    int a;
    printf("Enter a positive integer (a): ");
    scanf("%d", &a);
    if (a <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1; 
    }
    generateSeries(a);
    return 0;
}
