#include <stdio.h>

int fibonacci(int n)    
{
    if (n <= 1)    
        return n;     
    else
        return fibonacci(n - 1) + fibonacci(n - 2);    
}

int main() {
    int n = 0;    
    int i = 0;    
   
    scanf("%d", &n);    		
    
    while (n > i)    
    {    
        printf("%d\n", fibonacci(i));   
	i++;  
    }

    return 0;
}
