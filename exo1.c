#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exo1(){
	
    printf("\nExercice 1 : ");
	
	
	int f;
	float c;
	
	for(f = 0; f<= 300; f+= 10){
		c = (5.0/9.0)*(f - 32);
		
		printf("\n\n%d in ferenheit is : %.2f celsius ", f, c);
	}
	
}


void exo2(){
	
	printf("\nExercice 2 : ");
	
	const double c = 2426555645;
	
	double i;
	
	i = 1;
	
	while(i*2<c){
		i *= 2;
	};
	
	printf("\n\nThe largest power of 2 less than is : %.2lf", i);
}

void exo3(){
	
	printf("\n\n\n\nExo3 : ");
	
	int n,i;
	float Un;
	
	printf("\nEnter a number n for the last term of the sequence : ");
	scanf("%d", &n);
	
	
	
	if(n==0){
		printf("\nU0 = 1");
	}else{
		Un = 1;
		for(i = 1;i<=n;i++){
			
			Un = 2*sqrt(Un + 1) - 1;
		}
		
		printf("\nThe term %d of the sequence Un is : %.2f", n, Un);
	}
	
}



void exo4part1(){
	printf("\n\n\nExercise 4 : ");
	
	int i,n;
	float f, max;
	
	printf("\nEnter a value for n : ");
	scanf("%d", &n);
	
	max = 150*sin(0)/(i + 1);
	
	for(i=0;i<=n-1;i++){
		f = 150*sin(i)/(i + 1);
		
		if(f > max){
			max = f;
		}
	}
	
	printf("\nLe maximum de f est : %.2f", max);
	

}

exo4part2(){
	
	printf("\n\n\nExercise 3 : ");
	int a,n,i,j;
	float f;
	
	printf("\nEnter a value for n : ");
	scanf("%d", &n);
	
	printf("\nEnter a value for a : ");
	scanf("%d", &a);
	
	j = 0;
	
	for(i = 0;i<=n-1; i++){
		f = 150*sin(i)/(i + 1);
		
		if(f >= -a && f <= a){
			j++;
		}
		
	}
	
	printf("\nThe number of values of the function f in [-%d , %d] are : %d", a, a, j);
}


 void exo5(){
 	printf("\n\n\nExercise 5 : ");
 	
 	int lines, i,j;
 	
 	printf("\nEnter the number of lines you want to draw : ");
 	scanf("%d", &lines);
 	
 	for(i = 1;i<=lines;i++){
 		for(j=1;j<=i;j++){
 			printf("*");
		 }
		 
		 printf("\n");
 		
	 }
 }
 
 void exo6(){
 	printf("\n\n\nExercise 6 : ");
 	
 	int i,n,S;
 	
 	S = 0;
 	i=0;
 	
 	do{
 		printf("\nEnter an integer n : ");
 		scanf("%d", &n);
 		
 		S += n;
 		
 		i++;
	 }while(i<4);
	 
	 printf("\nThe sum is : %d", S);
 }
 
 
 void exo7(){
 	
 	int n,fact,i;
 	
 	printf("\nEnter a number n : ");
 	scanf("%d", &n);
 	
 	if(n==0){
 		printf("\nThe factoriel of %d is : 1");
 		
	 }else{
	 	
	 	fact = 1;
	 	for(i=1;i<=n;i++){
	 		fact = fact*i;
		 }
		 
		 printf("\nThe factoriel of %d is : %d",n, fact);
		
	 }
 	
 }
 
 
 void exo8(){
 	
 	printf("\n\nExercice 8 : ");
 	
 	int S,n,i;
 	
 	printf("\n\n\nEnter a number n : ");
 	scanf("%d", &n);
 	
 	S = 0;
 	
 	for(i = 0; i<=n;i++){
 		
 		S = S + pow(i, 3);
 		
	 }
	 printf("\nThe sum is : %d", S);
 	
 	
 }
 
 
 

 


int main(){
	
	//exo1();
	
	//exo2();
	//exo3();
	
	//exo4part1();
	
	//exo4part2();
	
	//exo5();
	
	//exo6();
	
	//exo7();
	exo8();
	
	
	
	
	return 0;
}
