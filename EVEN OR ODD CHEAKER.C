#include <stdio.h>

int main() {
    int n, num;

    printf("How many numbers do you want to check? ");
    scanf("%d", &n);

    // Loop to check multiple numbers
    for(int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Control flow: if-else
        if(num % 2 == 0) {
            printf("%d is Even\n", num);
        } else {
            printf("%d is Odd\n", num);
        }
    }

    return 0;
}
