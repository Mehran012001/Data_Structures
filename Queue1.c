#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full.\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = item;
}

int dequeue() {
    if (front == -1) {
        printf("Queue is empty.\n");
        return -1;
    }
    int item = queue[front];
    front++;
    if (front > rear)
        front = rear = -1;
    return item;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    return 0;
}
