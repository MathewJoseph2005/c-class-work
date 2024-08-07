#include <stdio.h>

int main(){
	int n,i,x,count=0;
	int A[30];
	printf("Enter the size of the array:");
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		printf("Enter the element of the array:");
		scanf("%d",&A[i]);
	}
	printf("Enter the value to be found:");
	scanf("%d",&x);
	for(int i = 0;i<n;i++){
		if(A[i] == x){
			printf("the element was found at the position %d \n",i+1);
			count++;
		}
	
	}
	if(count > 0){
		printf("the iteam was found %d times",count);
	}else{
		printf("the iteam was not found");
	}
	return 0;
}
