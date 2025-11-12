//#include <stdio.h>
//int main(){
//	int a , b, c ; 
//	printf("Enter Your first subject marks /100:");
//	scanf("%d",&a);
//	printf("Enter Your Second subject marks /100:");
//	scanf("%d",&b);
//	printf("Enter Your third subject marks /100:");
//	scanf("%d",&c);
//	float perc =  ((a+b+c)*100)/300;
//	if((a >= 33 && b >= 33 && c >= 33) && (perc >=40)){
//		printf("passs");
//	}
//	else{
//		printf("Fail");
//	}
//	return 0; 
//}



#include <stdio.h>
int main(){
	int a;
	float b;
	printf("Enter Your Sallery:\n ");
	scanf("%d",&a);
	if(a > 250000 && a < 500000){
		b = a - a*0.95;
		printf("Your Tax for %d is  %f",a,b);
	}
	else if(a > 500000 && a < 1000000){
		b = a - a*0.80;
		printf("Your Tax for %d is  %f",a,b);
	}
	else if(a> 1000000){
		b = a - a*0.70;
		printf("Your Tax for %d is  %f",a,b);
	}
	else{
		printf("no Tax");
	}
	return 0; 
}
