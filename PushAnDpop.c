#include<stdio.h>
int stack[1000], max, top=-1, choice;
void push() {
    int value;
    if(top==max-1) {
        printf("Overflow\n");
    } else {
        printf("Push elements into stack :\n");
        while(top<max-1) {
            top++;
            printf("Enter the %d index value : \n", top);
            scanf("%d", &value);
            stack[top]=value;
        } 
    }
    printf("The elements in stack are :\n");
    for(int i=top; i>=0; i--) {
        printf("%d\n", stack[i]);
    }
}
void pop() {
    int value;
    if(top==-1) {
        printf("Underflow\n");
    } else {
        int popElements;
        printf("Enter the number of elements you want to pop : \n");
        scanf("%d", &popElements);
        for(int i=0; i<popElements; i++) {
            value=stack[top];
            top--;
            printf("The popped element is : %d\n", value);
        }
        
    }
    printf("The stack is : \n");
    for(int i=top; i>=0; i--) {
 printf("%d\n", stack[i]);
    }
}
int main() {
    printf("Enter the size of the stack :\n");
    scanf("%d", &max);
    while(1) {
        printf("1. Push\n2. Pop\n3. Exit\n");
        printf("Enter your choice : \n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("Exiting");
                return 0;
            default:
                printf("\nInvalid choice");
        }
    }
return 0;
}