
//fibonacci series:-
#include <stdio.h>
int series (int);
int series(int a){
	if(a == 0){
		return 0;
	}
	else{
	return a + series(a-1);
	};
}
int main(){
	int a;
	printf("Enter NUmber here: \n");
	scanf("%d",&a);
	printf("sum of numbers is : %d",series(a));
	return 0;
}


// solving factorials using recursion f(x)
#include <stdio.h>
//int fact (int);
//int fact (int a){
//	if(a >= 0){
//		if(a == 1 || a == 0){
//		return 1;
//	    }
//	    else{
//		    return a * fact (a -1);
//	    };
//	}
//	else{
//		printf("error infinite recursion!!");
//	};
//};
//int main (){
//	int a;
//	printf("enter number here for factorial calc: \n");
//	scanf("%d",&a);
//	printf("answer for %d! is: %d",a,fact(a));
//	return 0;
//}




/* printing 
*
***
*****
for inputing n= 3 write its code*/
//int main (){
//	int a;
//	printf("Input your number : \n");
//	scanf("%d",&a);
//	for (int i=0;i<a;i++){
//		printf("*");
//		for (int j=0;j<i*2 ;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

/* printing 
*
**
***
for inputing n= 3 write its code*/
int main (){
	int a;
	printf("Input your number : \n");
	scanf("%d",&a);
	for (int i=a;i>=y0;i--){
		for (int j=i-1;j>=0;j--){
			printf("*");
		}
		printf("\n");
    }
	return 0;
}




#include <stdio.h>

int main() {
    int n = 3; // the middle line has 6 stars (n*2)
    
    // upper part
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // stars (2*i)
        for (int j = 1; j <= 2*i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // lower part
    for (int i = n-1; i >= 1; i--) {
        // spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // stars (2*i)
        for (int j = 1; j <= 2*i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n = 3; // the middle line has 6 stars (n*2)
    
    // upper part
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // stars (2*i)
        for (int j = 1; j <= 2*i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // lower part
    for (int i = n-1; i >= 1; i--) {
        // spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // stars (2*i)
        for (int j = 1; j <= 2*i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

