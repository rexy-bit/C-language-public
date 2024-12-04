#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

int exo1(){

    int i,N;

    do{
        printf("\nEnter the size of the array : ");
        scanf("%d", &N);
    }while(N<=0);
    int T[N];

    T[0]=1;
    for(i=1;i<N;i++){
        T[i]=T[i-1]*2;
    }
    printf("\n\n");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
        
    }

    return 0;
    
}

int exo2(){
   int i,N;

   do{

    printf("\nENter the size of the array : ");
    scanf("%d", &N);
   }while(N<=0);

   int T[N];

   for(i=0;i<N;i++){
      printf("\nEnter the value of the case %d : ", i);
      scanf("%d", &T[i]);
   }

   for(i=0;i<N;i++){
      if(i%2==0){
        printf("%d | ", T[i]);
      }

   }
   return 0;
}

int exo3(){
    int i,N;
    int S =0;

    do{

        printf("\nEnter the size of the array : ");
        scanf("%d", &N);

    }while(N<=0);

    int T[N];
   for(i=0;i<N;i++){
    printf("\nEnter a value for the case %d : ", i);
    scanf("%d", &T[i]);
   }

   for(i=0;i<N;i++){
    S += T[i];
   }

   printf("\nThe sum is : %d", S);

   return 0;
}

int exo4(){

    int i,N;
    int max;

    do{
        printf("\nENter the size of the array : ");
        scanf("%d", &N);
    
    }while(N<=0);
     int T[N];
    for(i=0;i<N;i++){
        printf("\n\nEnter the value of the case  %d : ", i);
        scanf("%d", &T[i]);
    }
    printf("\n");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
     max = T[0];
    for(i=0;i<N;i++){
        if(max < T[i]){
            max = T[i];
        }
    }

    printf("\n\nThe maximum of the array is : %d", max);
    return 0;
}

int exo5(){

    int i,N;
     int m;
     bool p = false;
    do{
        printf("\nEnter the size of the array : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nENter the value of the case  %d : ", i);
        scanf("%d", &T[i]);
    }

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    printf("\nEnter a number to search : ");
    scanf("%d", &m);
i =0;
      while(i<N && p == false){
        if(T[i] == m){
            p= true;
        }

        i++;
      }

      if(p==true){
        printf("\n %d exists in the table ", m);
      }else if(p== false){
           printf("\n%d doesn't exists in the table ", m);
      }

      return 0;

}

int exo6(){

    int i,N,j;
    int val;

    do{
        printf("\nEnter the size of the table : ");
        scanf("%d", &N);
    }while(N<=0);
int T[N];
    for(i=0;i<N;i++){
        printf("\nENter the value of the case %d : ", i);
        scanf("%d", &T[i]);
    }
    
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    printf("\n");
    printf("\nYour table is : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    printf("\nEnter a value to delete ");
    scanf("%d", &val);

    for(i=0;i<N;i++){
        if(T[i]==val){
            for(j=0;j<N-1;j++){
                T[j]=T[j+1];
            }
            N--;
            i--;
        }
    }

    printf("\nYour table after the deletion of %d is : ", val);

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }


   return 0;
    

}

int exo7(){

    int i,N;
    int min,max;

    do{
        printf("\nEnter the size of the table : ");
        scanf("%d", &N);
    }while(N<=0);
  int T[N];
    for(i=0;i<N;i++){
        printf("\nENter a value for the case %d : ", i);
        scanf("%d", &T[i]);
    }
printf("\n\nYour table is : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
    min = T[0];
    max = T[0];
    int diff = 0;
    for(i=0;i<N;i++){
      if(T[i]<min){
        min = T[i];
      }

      if(max <T[i]){
        max = T[i];
      }


    }

    diff = max - min;
    
    printf("\nThe maximum is : %d\nThe minimum is : %d", max , min);
    printf("\nThe greatest difference in the table is : ");
    printf("\n%d", diff);

    return 0;

    
}
int main(){
   exo7();


   return 0;
}