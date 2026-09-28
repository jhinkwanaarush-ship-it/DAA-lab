#include <stdio.h>

int frec(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return frec(n - 1) + frec(n - 2);
}

int main() {
    int n;
    printf("n: ");
    if (scanf("%d", &n) != 1) {
        printf("invalid\n");
        return 1;
    }
    
    printf("%d\n", frec(n));
    return 0;
}
