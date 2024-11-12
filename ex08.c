#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    
    // Input
    for(int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    // Display numbers
    printf("\nNumbers entered: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    
    // Calculate and display statistics
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum/10);
    
    return 0;
}
