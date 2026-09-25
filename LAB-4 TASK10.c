#include<stdio.h>
int main(){
	printf("Zone type And their speed limit: \n1-School Zone,30 km/h \n2-Highway,100 km/h \n3-Residential Area,50 km/h");
	printf("\nEnter Zone type (range 1-3): ");
	int zone;
	int speed;
	printf("Enter zone type: ");
	scanf("%d",&zone);
	printf("Enter speed (in km/h): ");
	scanf("%d",&speed);
	switch(zone){
		case 1:
			if(speed>30+20){
				printf("Fine=2000");}
			else if(speed<=30){
				printf("No Fine");}
			else{ printf("Fine=1000");}
		  break;
		case 2:
			if(speed>100+20){
				printf("Fine=2000");}
					else if(speed<=100){
				printf("No Fine");}
			else{ printf("Fine=1000");}
		  break;
		case 3:
			if(speed>50+20){
				printf("Fine=2000");}
					else if(speed<=50){
				printf("No Fine");}
			else{ printf("Fine=1000");}
		  break;
	}
	return 0;
}