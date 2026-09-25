#include<stdio.h>
int main(){
	int amount;
	int status;
	printf("Enter Transaction amount: ");
	scanf("%d",&amount);
	printf("is your location status inside or outside of home city? (1 for outside, 0 for inside): ");
	scanf("%d",&status);
	if(amount>100000 && status==1){
		printf("Flagged for Review");
	}
	else if(amount>500000){
		printf("Flagged for Review");
	}
	else {
		printf("Approved");	
	}
	return 0;
}