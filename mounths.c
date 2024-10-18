#include <stdio.h>

main(){
	enum mounths { Jan = 1, Feb = 2, Mar = 3, Apr= 4, May = 5, Jun = 6, Jul =7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12 
	};
	int mounth;
	printf("\nEnter the number of your mounth : ");
	scanf("%d", &mounth);
	if(mounth == 1 || mounth == 2 || mounth == 12){
		printf("It\'s Winter , it\'s cold outside :(\n");
	}else if(mounth == 3 || mounth == 4 || mounth == 5){
		printf("It\'s spring ! The trees are butifull and the flowers are gorgeous :)\n");
	}else if(mounth == 6 || mounth == 7 || mounth == 8){
		printf("Youha! it\'s summer let's go to the beach :)\n");
	}else if(mounth == 9 || mounth == 10 || mounth == 11){
		printf("It\'s authumn, It\'s butifull outside :)\n");
	}else{
		printf("Wrong number, check again ;)");
	}
	
	
	
}
