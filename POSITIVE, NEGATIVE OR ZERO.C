#include <stdio.h>

int main() {
    int num, i;

    // Loop runs 3 times (you can change the number of iterations)
    for(i = 1; i <= 3; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num > 0) {
            printf("%d is Positive\n", num);
        }
        else if(num < 0) {
            printf("%d is Negative\n", num);
        }
        else {
            printf("The number is Zero\n");
        }
    }

    return 0;
}
