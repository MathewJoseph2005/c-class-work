#include <stdio.h>
int main(){
	int space = 0;
	int time = 0;
	int n,x;
	time+=4;
	space+=4;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	int left = 0,right = n-1;
	int flag = 0;
	int mid;
	space+=4;
	time+=3;
	for(int i = 0;i<n;i++,time++){
		printf("enter the element of array in sorted order:");
		scanf("%d",&a[i]);
		time++;
	}
	printf("enter the element to be searched:");
	scanf("%d",&x);
	while(left <= right){
		time++;
		mid = (left + right)/2;
		time++;
		if(x == a[mid]){
			flag = 1;
			time++;
			break;
		}
		else if(x > a[mid]){
			left = mid + 1;
		}else if(x < a[mid]){
			right = mid -1;
		}else{}
	}
	time++;
	if(flag == 0){
		printf("the element was not found in the array");
		time++;
		
	}else{
		printf("the element was found in the array");
		time++;
	}
	
	printf("the space complexity of the program =%d\n",n*4+space);
	printf("the time complexity of the program = %d",time);
}
