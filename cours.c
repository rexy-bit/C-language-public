#include <stdio.h>

   
void echange(int *x, int *y){

    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

}

void echange2( int x, int y){
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("\na = %d, b = %d", x, y);
}

void maximum(int *x, int *y, int *m){
    if(*x < *y){
        *m = *y;
    }else{
        *m = *x;
    }
    
}
int main(){

     int a,b,max;

     printf("\nVeillez entrez la valeur de a : ");
     scanf("%d", &a);

     printf("\nVeillez entrez la valeur de b : ");
     scanf("%d", &b);

     maximum(&a,&b,&max);
     printf("\nLe maximum est : %d", max);



     return 0;
}