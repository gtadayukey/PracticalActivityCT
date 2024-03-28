#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i = 1;
    
    scanf("%d", &n);
    
    printf("\n");
    
    while (i < n) {
        printf("%d\n", fibonacci(i));
	i++;
    }

    return 0;
}
