#include <stdio.h>

int main() {
    printf("Col1  Col2  Col3\n");
    printf("----------------\n");
    for(int i = 1; i <= 10; i++) {
        printf("%-5d %-5d %d\n", i*5, 100-((i-1)*10+1), i);
    }
    return 0;
}
