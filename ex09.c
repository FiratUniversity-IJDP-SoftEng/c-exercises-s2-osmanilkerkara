#include <stdio.h>

int main() {
    int num, count = 0, sum = 0;
    
    printf("Enter numbers (-1 to stop):\n");
    while(1) {
        scanf("%d", &num);
        if(num == -1) break;
        sum += num;
        count++;
    }
    
    if(count > 0) {
        printf("Count: %d\n", count);
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", (float)sum/count);
    } else {
        printf("No numbers entered.\n");
    }
    return 0;
}
