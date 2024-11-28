#include <stdio.h>
#define MAX_SIZE 5 // Define the maximum size of the stack

int stack[MAX_SIZE]; // Static array to hold the stack elements
int top = -1;        // Keeps track of the top element in the stack

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to check if the stack is full
int isFull() {
    return top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    stack[++top] = value;
    printf("%d pushed onto the stack.\n", value);
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop.\n");
        return -1; // Returning -1 to indicate an error
    }
    return stack[top--];
}

// Function to peek at the top element of the stack
int peek() {
    if (isEmpty()) {
        printf("Stack is empty! No top element.\n");
        return -1; // Returning -1 to indicate an error
    }
    return stack[top];
}

// Function to display the elements of the stack
void display() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements are: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

// Main function to test the stack implementation with user interaction
int main() {
    int choice, value;

    while (1) {
        printf("\n--- Stack Operations ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Push
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2: // Pop
                value = pop();
                if (value != -1) {
                    printf("Popped element is %d\n", value);
                }
                break;

            case 3: // Peek
                value = peek();
                if (value != -1) {
                    printf("Top element is %d\n", value);
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
