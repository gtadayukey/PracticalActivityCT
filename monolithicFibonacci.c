#include <stdio.h>

int main() {
    int count;
    int next;
    int first = 0; 
    int second = 1; 
    int i = 2;
    
    scanf("%d", &count);
    
    if (count >= 1)
        printf("\n%d\n", first);
    else
        goto end;
        
    if (n >= 2)
        printf("%d\n", second);
    else
        goto end;
 
    redo: if(count > i){
        next = first + second;
        printf("%d\n", next);
        first = second;
        second = next;
        count++;
        goto redo;
    }

    end: return 0;
}
