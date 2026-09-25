#include<stdio.h>
int main(){
	int temperature;
	int pressure;
	printf("Enter Temperature Reading: ");
	scanf("%d",&temperature);
	printf("Enter Pressure Reading: ");
	scanf("%d",&pressure);
	if(temperature>100 || pressure>250){
	printf("SHUT DOWN");
	}
	else if(temperature>=85 && temperature<=100 && pressure<=200 && pressure<=250){
			printf("Warning Mode");}
	else {
		printf("NORMAL");
	}
	return 0;
}
