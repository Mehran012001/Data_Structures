#include <stdio.h>

#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = -1, rear = -1;

int isQueueFull() {
    return rear == MAX_SIZE - 1;
}

int main() {
    if (isQueueFull())
        printf("Queue is full.\n");
    else
        printf("Queue is not full.\n");
    return 0;
}
