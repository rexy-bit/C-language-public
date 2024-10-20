#include <stdio.h>
int main(){
	int T;
	int h, m, s, r;
	
	printf("\nEnter the time is seconds : ");
	scanf("%d", &T);
	
	h = T / 3600;
	
	r = T % 3600;
	
	m = r / 60;
	
	s = r % 60;
	
	
	
	printf("\nThe time is : %dh : %dmin : %ds ", h, m, s);
	
	return 0;
}
