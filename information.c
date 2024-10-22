#include <stdio.h>

int main(){
    double mainpassword = 123000;

    double password;

    printf("\nEnter your password to access your account : ");
    scanf("%lf", &password);

    if(password == mainpassword){
        printf("\n*************************************************");
        printf("\nCongratulations! You succesfully signed in");
        printf("\n*************************************************");
    }else{
        printf("\nError : incorrect password");
    }

    return 0;
}