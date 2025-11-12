///*Age Calculator
//This program here will calculate Hours minutes seconds Days months years passed in your age uptill now
//*/
//#include <stdio.h>
//int main (){
//	int age ;
//	float months, days , sec , min , hours ;
//	printf("Enter Your Age In Years: ");
//	scanf("%d",&age);
//	months = age * 12;
//	days = age * 365.25;
//	hours = days *24;
//	min = hours * 60;
//	sec = min * 60;
//	printf("No of years passed is %d:\n " , age);
//	printf("No of Months passed is %f:\n " , months);
//	printf("No of Days passed is %f: \n" , days);
//	printf("No of hours passed is %f: \n" , hours);
//	printf("No of min passed is %f: \n" , min);
//	printf("No of sec passed is %f: \n " , sec);
//	
//}


//#include <stdio.h>
//int main (){
//	int number;
//	printf("Enter Your Number: ");
//	scanf("%d",&number);
//	if(number > 0){
//		printf("Your Entered Number is positive ");
//	}
//	else if(number <0){
//	    printf("Your Entered Number is negetive ");	
//	}
//	else{
//		printf("Entered number is invalid or 0");
//	}
//}


//#include <stdio.h>
//int main (){
//	int age; 
//	printf("Enter Your age here: ");
//	scanf("%d",&age);
//	if(age < 18){
//		printf("You are a minor");
//    } 
//	else{
//		printf("You are an adult");
//	}
//}

//Write a C++ program that takes three numbers as input and prints the largest number using if, else if, and else statements.
#include <stdio.h>
int main() {
    int a, b, c;

    printf("Input Number: ");
    scanf("%d", &a);

    printf("Input Number: ");
    scanf("%d", &b);

    printf("Input Number: ");
    scanf("%d", &c);

    if(a >= b && a >= c) {
        printf("Largest number is %d\n", a);
    }
    else if(b >= a && b >= c) {
        printf("Largest number is %d\n", b);
    }
    else {
        printf("Largest number is %d\n", c);
    }
}

