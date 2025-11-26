//#include <stdio.h>
//int main (){
//	int r,c,res=0,count=1;
//	
// 
// 
//	for(int i=0;i<r;i++){
//		res = 0;
//		for(int j=0;j<c;j++){
//			res = res + d_array[i][j];
//		}
//		printf("sum of row %d is: %d \n",count,res);
//			count++;
//	}
//}
//



#include <stdio.h>
int main(){
	int r,c,res,count=1;
	printf("Define Rows in number: \n");
	scanf("%d",&r);
	printf("Define columns in number: \n");
	scanf("%d",&c);
	int arr[r][c];
	for (int i=0;i<r;i++){
		for (int j=0 ; j<c;j++){
			printf("Enter value for element [%d][%d]: ", i+1, j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Matrix is:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < r; i++){
    	res = 0;
        for(int j = 0; j < c; j++){
        	res = res + arr[i][j];
        }
        printf("sum of row %d is %d ",count,res);
            count++;
        printf("\n");
    }
}


