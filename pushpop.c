//C program that implements a stack using an array and performs push and pop operations.
#include <stdio.h>

// Define the maximum size of the stack
#define MAX 10

// Initialize the stack array and the top variable
int stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push(int value)
{
    // Check if the stack is full
    if (top >= MAX - 1) {
        printf("Error: Stack overflow!\n");
        return;
    }

    // Add the element to the top of the stack
    stack[++top] = value;
}

// Function to pop an element from the stack
int pop()
{
    // Check if the stack is empty
    if (top == -1) {
        printf("Error: Stack underflow!\n");
        return -1;
    }

    // Return the top element and decrement the top variable
    return stack[top--];
}

// Function to display the elements in the stack
void display()
{
    if (top == -1) {
        printf("Error: Stack is empty!\n");
        return;
    }

    // Display the elements in the stack from top to bottom
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main()
{
    int choice, num;

    while (1) {
        printf("Perform operations on the stack: \n");
        printf("1. Push the element\n");
        printf("2. Pop the element\n");
        printf("3. Display the stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter an element to push: ");
            scanf("%d", &num);
            push(num);
            break;

        case 2:
            num = pop();
            if (num != -1) {
                printf("Popped element: %d\n", num);
            }
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice! Please choose a valid option.\n");
        }
    }

    return 0;
}