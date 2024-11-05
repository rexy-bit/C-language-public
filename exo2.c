#include <stdio.h>

main(){
	
	int x = 6;
	int y = 6;
	
	int i = ++x; 
	int j = y++;
	
	printf("\ni = %d,\nj = %d", i, j);
	printf("\nx = %d, y = %d", x, y);
}
