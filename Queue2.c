#include <stdio.h>

#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = -1, rear = -1;

int isQueueEmpty() {
    return front == -1;
}

int main() {
    if (isQueueEmpty())
        printf("Queue is empty.\n");
    else
        printf("Queue is not empty.\n");
    return 0;
}
