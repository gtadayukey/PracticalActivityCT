#include <stdio.h>

int main() {
    int count = 0;
    int next = 0;
    int first = 0;
    int second = 1;
    int i = 2;
 
    scanf("%d", &count);
    
    if (count >= 1)
        printf("\n%d\n", first);

    if (count >= 2)
        printf("%d\n", second);
    
    while(count > i){
        next = first + second;
        printf("%d\n", next);
        first = second;
        second = next;
        i++;
    }

    return 0;
}
