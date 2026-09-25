#include<stdio.h>
int main(){
	int people;
	float weight;
	printf("Enter number of people: ");
	scanf("%d", &people);
	printf("Enter total weight: ");
	scanf("%f", &weight);
	if(people<=10 && weight<=1000){
		printf("Operate Normally");
		}
	else if(weight>1000 && people<=10){
		printf("DENY: OVER WEIGHT");
	    }
	else if(weight<=1000 && people>10){
	    printf("DENY: REACHED PEOPLE LIMIT");
	}
	else {
		printf("DENY: REACHED PEOPLE LIMIT and OVER WEIGHT");
	}
	return 0;
	}
	