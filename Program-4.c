#include <stdio.h>
void countMultiples(int arr[], int size) {
    int counts[9] = {0}; 
    for (int i = 0; i < size; i++) {
        for (int j = 1; j <= 9; j++) {
            if (arr[i] % j == 0) {
                counts[j - 1]++; 
            }
        }
    }
    printf("{");
    for (int i = 0; i < 9; i++) {
        printf("%d: %d", i + 1, counts[i]);
        if (i < 8) {
            printf(", ");
        }
    }
    printf("}\n");
}
int main() {
    int arr[] = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    countMultiples(arr, size); 
    return 0;
}
