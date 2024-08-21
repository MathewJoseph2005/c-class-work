#include <stdio.h>
#include <stdlib.h>

int queue[20];
int front =-1,rear = -1;
int iteam;
void enqueue(int max_size){
    if (front == (rear+1)%max_size)
    {
        printf("overflow");
    }else{
        if (front == -1)
        {
            front =0;
        }
        
        rear = (rear+1)%max_size;
        printf("Enter the element:");
        scanf("%d",&iteam);
        queue[rear] = iteam;
    }
    
}
void dequeue(int max_size){
    if (front == -1 && rear==-1)
    {
        printf("underflow");
    }else if(front == rear){
        int dequeueIteam = queue[front];
        front = -1;
        rear = -1;
        printf("the dequed element is %d",dequeueIteam);
    }else{
        int dequeueIteam  = queue[front];
        front = (front+1)%max_size;
        printf("the dequed element is %d",dequeueIteam);
    }
    
    
}
void display(){
    if (front == -1)
    {
        printf("queue is empty\n");
    }
    else{
        printf("elements of the queue is:\n");
        for (int i = front; i <=rear; i++)
        {
            printf("%d ",queue[i]);
        }
        
    }
}
int main(){
    int choice,value,max;
    printf("enter the maxsize of the queue:");
    scanf("%d",&max);
    while (1)
    {
        printf("\nqueue operations\n");
        printf("1.enqueue \n2.dequeue \n3.display\n4.exit:\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue(max);
            break;
        case 2:
            dequeue(max);
            break;
        case 3:
            display();
            break;

        case 4:
            printf("Exiting");
            exit(0);
            break;    
        default:
            break;
        }
    }
    
}