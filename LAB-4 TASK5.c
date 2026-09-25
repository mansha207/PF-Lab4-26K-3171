#include<stdio.h>
int main (){
	int amount;
	int membership;
	int city;
	printf("Enter order amount: ");
	scanf("%d", &amount);
	printf("Are you premium member (enter 1 for yes and 0 for no): ");
	scanf("%d", &membership);
	printf("Are in inside or outside city (input as 1 for within city, 0 for outside): ");
	scanf("%d", &city);
	if(amount>3000 || membership==1){
		printf("Delivery charges= 'FREE'");
	}
	else{
		printf("Delivery charges= NOT FREE");
	}
	if(amount<50000 && city==1){
		printf("COD= AVAILABLE");
	}
	else {
		printf("COD= NOT AVAILABLE");
	}
	return 0;
}