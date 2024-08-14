#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 4

int queue[50];
int front = -1,rear = -1;

void enqueue(int value){
    if (rear == MAX_SIZE-1){
        printf("Overflow\n");
    }else{
        if (front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("the iteam has been enqueued into the queue\n");
    }
    
}

void dequeue(){
    if (front == -1 & rear ==-1 || front > rear)
    {
        printf("underflow\n");
    }else{
        printf("the element %d is dequeued\n",queue[front]);
        front++;
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
            printf("%d\t",queue[i]);
        }
        
    }
}

int main(){
    int choice,value;
    while (1)
    {
        printf("\nqueue operations\n");
        printf("1.enqueue \n2.dequeue \n3.display\n4.exit:\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("enter the iteam:");
            scanf("%d",&value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;    
        default:
            break;
        }
    }
    
}