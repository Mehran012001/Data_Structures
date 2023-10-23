#include <stdio.h>

#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = -1, rear = -1;

void displayQueue() {
    int i;
    if (front == -1)
        printf("Queue is empty.\n");
    else {
        printf("Queue elements: ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    displayQueue();
    return 0;
}
