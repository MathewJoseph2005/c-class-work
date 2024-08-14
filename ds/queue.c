#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;  // Initialize the queue as empty

// Function to add an element to the queue
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot enqueue %d onto the queue.\n", value);
    } else {
        if (front == -1) front = 0;  // Initialize front if it's the first element
        queue[++rear] = value;
        printf("%d enqueued onto the queue.\n", value);
    }
}

// Function to remove an element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! No element to dequeue.\n");
    } else {
        printf("%d dequeued from the queue.\n", queue[front++]);
        if (front > rear) front = rear = -1;  // Reset queue if it becomes empty
    }
}

// Function to display the queue elements
void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    int choice, value;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
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
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
