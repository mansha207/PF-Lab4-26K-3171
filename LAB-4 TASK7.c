#include<stdio.h>
int main(){
	int min;
	int Plan;
	int bill;
	printf("Plan 1:Rs. 500 for 1000 minutes \nPlan 2:Rs. 800 for 2000 minutes \nPlan 3:Rs. 1200 for unlimited minutes \nPlan 4:custom plan billed at Rs. 1/minute");
	printf("\nEnter plan number (range 1-4): ");
	scanf("%d", &Plan);
	printf("\nEnter minutes used: ");
	scanf("%d", &min);
	switch (Plan){
		case 1:
			if(min>1000){
				bill= 500+ (min-1000)*2;
				printf("\nyour total bill is %d", bill);
			}
			else { printf("\nyour total bill is 500");
			}
			break;
		case 2:
		if(min>2000){
				bill= 800+ (min-2000)*2;
				printf("\nyour total bill is %d", bill);
			}
			else { printf("\nyour total bill is 800");
			}
	    	break;
		case 3:
		printf("\nyour total bill is 1200");
		    break;
		case 4:
		bill =1*min;
        printf("\nyour total bill is %d", bill);
			break;		
	}
	return 0;
}