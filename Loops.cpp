#include <stdio.h>
int main (){
	int n  = 0 , i = 0;
	while ( i <= 10){
		n = i + n;
		i++;
    };
    printf("%d ", n);
}
