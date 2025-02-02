#include <stdio.h>
int main(){
    int x;
    int y;

    printf("what's x? :\n");
    scanf("%d", &x);

    printf("what's y? :\n");
    scanf("%d", &y);

    if(x<y){
        printf("y is greater than xS\n");
    }else if(x>y){
        printf("x is greater than y\n");
    }else{
        printf("x equals y\n");
    }

    return 0;
}