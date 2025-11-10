#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Push function
void push(int x) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        top++;
        stack[top] = x;
    }
}

// Pop function
int pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    } else {
        int value = stack[top];
        top--;
        return value;
    }
}

// Display stack (top to bottom)
void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Peek function (returns top element)
int peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        return stack[top];
    }
}

int main() {
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    printf("Pushed stack:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        push(x);
        printf("%d\n", x);
    }

    printf("Elements push stack: ");
    display();

    printf("Top element is: %d\n", peek());

    int popped = pop();
    if (popped != -1)
        printf("Popped element: %d\n", popped);

    printf("Elements popped stack: ");
    display();

    return 0;
}

