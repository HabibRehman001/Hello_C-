#include <stdio.h>
#include <stdlib.h>   
#include <time.h>     

int main() {
    int randomNumber,count = 1,inpt;

    srand(time(0));

    randomNumber = rand() % 100;
    do{
    	printf("Guess the integer between 1-100: \n");
    	scanf("%d",&inpt);
    	if(randomNumber != inpt){
    		if(randomNumber > inpt){
    			printf("Please Increase the value of your guessed number");
			}
			else if(randomNumber < inpt){
				printf("Please Decrease the value of your guessed number");
			}
		count++;
		};
	}
	while(inpt != randomNumber);
	printf("Congrats!!! \n after %d times you guessed the right number!!!",count);
    return 0;
}

