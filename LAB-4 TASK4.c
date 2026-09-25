#include<stdio.h>
int main (){
	int pass;
	float grade;
	int credit;
	printf("What's yor pass status for Programming Fundamentals (input as 1 for passed, 0 for not passed): ");
	scanf("%d", &pass);
	printf("Enter your grade point: ");
	scanf("%f", &grade);
	printf("Enter your credit hours: ");
	scanf("%d", &credit);
	if(pass==1 && grade>=2.5 && credit>=30){
		printf("Eligible to Register for course of Advanced Programming");
	}
	else{
		printf("NOT Eligible to Register for course of Advanced Programming");		
	}
	return 0;
}