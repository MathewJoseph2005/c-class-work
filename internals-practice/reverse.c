#include <stdio.h>

int main(){
    int orgNumber,num,rem,res = 0;
    printf("Enter the number\n");
    scanf("%d",&num);
    orgNumber = num;
    while (num != 0)
    {
        rem = num%10;
        res = (res*10) +rem;
        num/=10;
    }
    if (orgNumber == res)
    {
        /* code */
    }else{
        
    }
    
}