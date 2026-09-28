#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insort(int a[], int n) {
    for (int j = 2; j <= n; j++) {
        int Key = a[j - 1]; 
        int i = j - 1;
        
        while (i > 0 && a[i - 1] > Key) {
            a[i] = a[i - 1];
            i--;
        }
        a[i] = Key;
    }
}

int main() {
    clock_t start, end;
    double cpu_time_used;

    int n = 10000;

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000000; 
    }

    start = clock();
    insort(arr, n);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("First 10 elements of sorted array: ");
    for (int k = 0; k < 10 && k < n; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");
    
    printf("Time taken to sort %d numbers: %f seconds\n", n, cpu_time_used);

    free(arr);

    return 0;
}
