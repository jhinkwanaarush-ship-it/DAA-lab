#include <stdio.h>

int fit(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    int t1 = 0, t2 = 1, next;
    for (int i = 2; i <= n; i++) {
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return t2;
}

int main() {
    int n;
    printf("n: ");
    if (scanf("%d", &n) != 1) {
        printf("invalid\n");
        return 1;
    }
    
    printf("%d\n", fit(n));
    return 0;
}
