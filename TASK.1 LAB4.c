#include<stdio.h>
int main(){
	int status;
	int miles;
	int ticket;
	printf("Is your membership status active?(Enter 0 for no and 1 for yes:  ");
	scanf("%d", &miles);
	printf("Enter miles you have flown:  ");
	scanf("%d", &miles); 
	printf("Enter price of ticket:  ");
	scanf("%d", &ticket);
	if(status==1 && miles>50000 || ticket>80000){
		printf("UPGRADED");
	}
	else {
		printf("Not eligible for upgrade");
	}
    return 0;	
}