//#include <stdio.h>
//float avg (int,int,int);
//float avg (int a = 63,int b = 2344,int c = 634){
//    	float result = (a+b+c)/3.0;
//    	printf("Avg is : %f",result);
//	}
//int main (){
//	avg();
//	return 0;
//}

//#include <stdio.h>
//float temp_to_ferenhight(float);
//float temp_to_ferenhight(float temp){
//	float ferenhight =  (temp*(9.0/5.0)) + 32;
//	printf("Temp in ferenhight is : \n %f",ferenhight);
//};
//int main (){
//	temp_to_ferenhight(60);
//}

//#include <stdio.h>
//float force (float);
//float force (float m){
//	return m * 9.81;
//}
//int main(){
//	printf("force excerted by earth is: %0.2f ",force(73.2));
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	int num = 0;
//	int num2 = 0;
//	for(int i = 0;i<=20;i++){
//		num = ++num2;
//		num2++;
//		printf("%d , %d" ,num , num2);
//	};
//	
//	return 0;
//}

#include <stdio.h>
int main(){
	char str = '*';
	for(int i= 0 ;i<=4;i++){
		printf("%c \n",str);
		for(int j=i;j<=5;j++){
			printf("%c",str);
	    }
	}
	return 0;
}










