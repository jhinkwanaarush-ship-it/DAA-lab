#include <stdio.h>

int main() {
    int n;
    printf("array size: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
    	printf("\narray elements: \n");
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int largest = arr[0];

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    float avg = (float)sum / n;

    printf("sum: %d\n", sum);
    printf("average: %.2f\n", avg);
    printf("largest: %d\n", largest);

    return 0;
}
