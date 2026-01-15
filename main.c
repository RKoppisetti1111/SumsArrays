#include <stdio.h>

int main(void) {
    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += nums[i];
    }

    printf("Sum: %i\n", sum);
    return 0;
}
