#include<stdio.h>
int main(){
	int hours;
	int rating;
	printf("Enter your working hours: ");
	scanf("%d",&hours);
	printf("Enter your attendence rating: ");
	scanf("%d",&rating);
	if(hours>8 && rating>=3){   
	int wage= 500*8+(hours-8)*1.5*500;
	printf("your wage is %d", wage);
	}
	else if (hours>8 && rating<3){
		int wage= 8*500;
		printf("your wage is %d", wage);
   }
    else {
    	int wage= hours*500;
	printf("your wage is %d", wage);	
	}
	return 0;
}
	
		
