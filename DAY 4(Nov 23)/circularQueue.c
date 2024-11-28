#include <stdio.h>
#define SIZE 5 // Define the size of the circular queue

// Global variables for the queue
int queue[SIZE];
int front = -1, rear = -1;

// Check if the queue is full
int isFull() {
    return (rear + 1) % SIZE == front;
}

// Check if the queue is empty
int isEmpty() {
    return front == -1;
}

// Add an element to the queue (enqueue)
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot enqueue %d\n", value);
        return;
    }

    if (isEmpty()) {
        front = 0; // If the queue is empty, set front to 0
    }

    rear = (rear + 1) % SIZE; // Circular increment of rear
    queue[rear] = value;      // Insert the value
    printf("Enqueued: %d\n", value);
}

// Remove an element from the queue (dequeue)
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot dequeue\n");
        return -1;
    }

    int value = queue[front]; // Get the value at front

    if (front == rear) {
        // If only one element was in the queue, reset pointers
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE; // Circular increment of front
    }

    printf("Dequeued: %d\n", value);
    return value;
}

// Display the queue elements
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;

    // Traverse from front to rear in a circular manner
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) {
            break;
        }
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

// Main function to demonstrate the Circular Queue
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); // Queue is now full

    display();

    dequeue();
    dequeue();

    enqueue(60);
    enqueue(70); // Adding elements in the circular queue

    display();

    return 0;
}
