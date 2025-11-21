#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);

    printf("\nMemory freed successfully.\n");

}


