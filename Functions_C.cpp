//Functions:-
#include <stdio.h>
/*Function prototype
is like telling compiler that sum function will be made and executed kind 
of be ready*/
//line 7 is called a prototype; 
int sum (int,int);
void hello();//prototype
//function defination;-
int sum(int a,int b){
	hello();
    return a+b;	
};
int main (){
	printf("%d",sum(3,4));
	
	return 0;
};
/*Taling about void functions they donot return any value so for void functions
to be made if there is a function not returning any value that is what meant by 
void an example to say that 
creating a void function*/
void hello(){
	printf("Hello World !!...\n");
};//a void function when call in code like hello() so it only prints hello world.
//Note :- Prototypes always came above the int main function

//Going furthur into functions in C:-

