#include <stdio.h>

int main(){
	int a;
    int b;
    
    printf("\nEnter a value for a : ");
    scanf("%d", &a);
    
    printf("\nEnter a value for b : ");
    scanf("%d", &b);
    
    printf("\nThe values before switching are : a = %d, b = %d", a, b);
    
    a = b + a;
    b = a - b;
    a = a - b;
    
    printf("\nThe values after switching are : a = %d, b = %d ", a, b);
    
    return 0;
    
}
