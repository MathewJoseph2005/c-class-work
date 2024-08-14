#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 3
int stack[50];
int top = -1;

void push(int iteam){
    if (top == MAX_SIZE -1){
        printf("\n");
        printf("stack overflow\n");
        printf("\n");
    }else{
        top++;
        stack[top] = iteam;
        printf("the element is pushed into the stack\n");
    }
    
}

void pop(){
    if (top == -1){
        printf("stack is empty\n");
    }else{
        printf("the element poped is %d\n",stack[top]);
        top--;
    }
    
}

void display(){
    if(top == -1){
        printf("stack is empty\n");
    }else{
        printf("the elements of the stack is\n");
        for (int i = top; i >=0 ; i--){
            printf("%d",stack[i]);
            printf("\n");
        }
    }
}

int main(){
    int choice,iteam;
    while (1)
    {
        printf("stack operations:\n");
        printf("1.push\n2.pop\n3.display\n4.exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("enter the iteam: ");
            scanf("%d",&iteam);
            push(iteam);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;

        case 4:
            exit(0); 

        default:
            break;
        }
        
    }
    
}
