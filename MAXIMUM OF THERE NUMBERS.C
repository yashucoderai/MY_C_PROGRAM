#include <stdio.h>

int main() {
    int arr[3];
    int i, max;

    printf("Enter three numbers: ");

    // Taking inputs using loop
    for(i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    // Using control flow (if-else) to find maximum
    max = arr[0];

    for(i = 1; i < 3; i++) {
        if(arr[i] > max) {
            max = arr[i];   // update max
        }
    }

    printf("Maximum Number = %d\n", max);

    return 0;
}
