#include <stdio.h>
#define MAX_SIZE 100 // Define the maximum size of the queue

int queue[MAX_SIZE]; // Static array to hold the queue elements
int front = -1;      // Index of the front element
int rear = -1;       // Index of the rear element

// Function to check if the queue is empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Function to check if the queue is full
int isFull() {
    return rear == MAX_SIZE - 1;
}

// Function to enqueue (add) an element into the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
        return;
    }
    if (front == -1) {
        front = 0; // Initialize front for the first element
    }
    queue[++rear] = value; // Add the element at the rear and increment rear
    printf("%d enqueued into the queue.\n", value);
}

// Function to dequeue (remove) an element from the queue
int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Cannot dequeue.\n");
        return -1; // Returning -1 to indicate an error
    }
    int value = queue[front++]; // Get the front element and increment front
    if (front > rear) { // Reset queue if it becomes empty
        front = rear = -1;
    }
    return value;
}

// Function to get the front element of the queue
int peek() {
    if (isEmpty()) {
        printf("Queue is empty! No front element.\n");
        return -1; // Returning -1 to indicate an error
    }
    return queue[front];
}

// Function to display the elements of the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements are: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// Main function to test the queue implementation with user interaction
int main() {
    int choice, value;

    while (1) {
        printf("\n--- Queue Operations ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Enqueue
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2: // Dequeue
                value = dequeue();
                if (value != -1) {
                    printf("Dequeued element is %d\n", value);
                }
                break;

            case 3: // Peek
                value = peek();
                if (value != -1) {
                    printf("Front element is %d\n", value);
                }
                break;

            case 4: // Display
                display();
                break;

            case 5: // Exit
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
