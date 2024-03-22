#include <stdio.h>

int main(){
    int orgNumber,num,rem,revNumber=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    orgNumber = num;
    while (num != 0)
    {
        int res = 1;
        rem = num%10;
        if(rem == 0){
                continue;
            }
        for(int j = 1;j<=rem;j++){
            res = res*j;
        }
        revNumber+=res;
        num/=10;

    }
    if (revNumber == orgNumber)
    {
        printf("%d is a strong number",orgNumber);
    }else{
        printf("%d is not a strong number",orgNumber);
    }
    
    
    
}