#include <stdio.h>
#define SIZE 10
void inputData(int *arr,int *elementNumber){
    for(int i =0;i<*elementNumber;i++){
        printf("element%d:",i);
        scanf("%d",&arr[i]);
    }
}
void readData(int *arr,int *elementNumber){
    for(int i =0;i<*elementNumber;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int num;
    printf("print the number of elements:");
    scanf("%d",&num);
    int arry[num];
    inputData(arry,&num);
    readData(arry,&num);
}


