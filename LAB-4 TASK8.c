#include<stdio.h>
int main(){
	float CGPA;
	int income;
	printf("Enter your CGPA: ");
	scanf("%f", &CGPA);
	printf("Enter monthly family income: ");
	scanf("%d", &income);
	if(CGPA>3.7 && income<50000){ 
	printf("FULL SCHOLARSHIP");
	}
	else if(CGPA>3.3 && income<100000){
	printf("HALF SCHOLARSHIP");
	}
	else {
	printf("NO SCHOLARSHIP");
	}
	return 0;
}