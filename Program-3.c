#include <stdio.h>
void generateSeries(int a) {
    int number = 1; 
    int count = 0; 
    for (int i = 1; i <= a; i++) {
        if (i % 2 != 0) { 
            printf("%d", number);
            count++;
            if (count < (a + 1) / 2) { 
                printf(", "); 
            }
            number += 2; 
        }
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
