#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = malloc(n1 * sizeof(int));
    int *R = malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++) L[i] = a[l + i];
    for (int j = 0; j < n2; j++) R[j] = a[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k++] = L[i++];
        } else {
            a[k++] = R[j++];
        }
    }

    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];

    free(L);
    free(R);
}

void sort(int a[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        sort(a, l, m);
        sort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main() {
    int n;
    printf("no. of elements(n)= ");
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));
    printf("elements= ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sort(a, 0, n - 1);

    printf("sorted array= ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    free(a);
    return 0;
}
