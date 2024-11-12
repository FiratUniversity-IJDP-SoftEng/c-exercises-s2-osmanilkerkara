#include <stdio.h>

int main() {
    printf("Numbers divisible by 3 from 100 to 50:\n");
    for(int i = 100; i >= 50; i--) {
        if(i % 3 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
