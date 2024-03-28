#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    printf("\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", fibonacci(i));
    }

    return 0;
}

