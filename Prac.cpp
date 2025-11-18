#include <stdio.h>
int main (){
	int income;
	float tax;
	printf("Enter Your Income: \n");
	scanf("%d",&income);
	if(income < 250000){
		printf("No Tax \n ");
	}
	elseif(income > 250000 && income <= 500000){
		tax = (income - 250000)*0.05
		printf("Tax on %d is 5% which is %f: ",income , tax)
	}
	else if(income > 500000 && income <= 1000000){
		tax = (income - 250000)*0.2 + (income - 500000) * 0.05
		printf("Tax on %d is 20% %f: ",income , tax)
    }
    else{
    	tax = (income - 250000)*0.2 + (1000000 - 500000) * 0.05 + (income - 1000000)*0.3
	}
}
