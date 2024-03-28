#include <stdio.h>

int main() {
    int first = 0, second = 1, next, i = 2, n;
    
    scanf("%d", &n);
    
    if (n >= 1)
        printf("\n%d\n", first);
    else
        goto end;
        
    if (n >= 2)
        printf("%d\n", second);
    else
        goto end;
    
    redo: if(n > i){
        next = first + second;
        printf("%d\n", next);
        first = second;
        second = next;
        i++;
        goto redo;
    }

    end: return 0;
}
