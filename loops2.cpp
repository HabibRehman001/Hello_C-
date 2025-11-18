//#include <stdio.h>
//int main (){
	//using while loops
//	int total = 0 , count = 0 ;
//	while (count <=10){
//		total = total + count;
//		count++;
//		
//	};
//	printf("sum of first 10 natural num is %d",total); 
     //using for loops
//    int total = 0;
//    for(int i = 0;i<=10;i++){
//        total += i;
//	};
//	printf("sum of first 10 natural num is %d",total);
     //using do-while loops
//    int total = 0,count = 0;
//    do{
//    	count++;
//    	total += count;
//	}
//	while(count<10);
//	printf("sum of first 10 natural num is %d",total);
//}
//___________________________________________________________________-
#include <stdio.h>
int main(){
	//sum of tables varying variables
//	int table = 14, count = 0 ,total = 0;
//	while (count<=10){
//		total += table * count;
//		count++;
//	};
//	printf("Sum of table of %d till %dx10 is %d",table,table,total);

    // finding factorials:-
//    int c = 1;
//    for(int i = 0 ; i>0;i--){
//        c *= i;
//	};
//	printf("Foctorial of 0 is %d",c);
    //factorials usig while loops:-
//    int ans = 1 ,num = 4,count = 0;
//    while(count <= num){
//    	ans *= num;
//    	count ++;
//    	num--;
//	};
//	printf("Foctorial of 4 is %d",ans);
//	return 0

//prime numbers
int num;
bool flag = false;
printf("Enter Your NUmber here : \n");
scanf("%d",&num);
if (num == 0 || num ==1){
	printf("%d is not prime",num);
}
else{
	for(int i = 2;i< num;i++){
	if(num % i == 0 && num != 2){
		flag = true;
		break;
	}
}
if(flag == true){
	printf("%d is not a prime number",num);
}
else{
	printf("%d is  a prime number",num);
}
}
}
