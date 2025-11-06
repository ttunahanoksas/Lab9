#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the number of real values: ");
    scanf("%d", &n);

    float *arr = malloc(n * sizeof(float));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d real values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    printf("Values in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
