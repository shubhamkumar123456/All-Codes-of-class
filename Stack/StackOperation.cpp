#include <iostream>
using namespace std;

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int num) {
    if (top != SIZE - 1) {
        top++;
        stack[top] = num;
        cout << num << " is inserted successfully\n";
    } else {
        cout << "Stack is overflow\n";
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack is underflow\n";
    } else {
        int popped = stack[top];
        top--;
        cout << popped << " is removed successfully\n";
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is underflow\n";
    } else {
        cout << stack[top] << " is the top element of the stack\n";
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is underflow\n";
    } else {
        cout << "Elements in stack are:\n";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << "\t";
        }
        cout << endl;
    }
}

// 🔍 Search function
void search(int key) {
    if (top == -1) {
        cout << "Stack is empty. Cannot search.\n";
        return;
    }

    bool found = false;
    for (int i = 0; i <= top; i++) {
        if (stack[i] == key) {
            cout << key << " found at position " << i << " (from bottom)\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << key << " not found in the stack\n";
    }
}

int main() {
    push(3);
    push(5);
    push(2);
    display();

    pop();
    peek();
    display();

    search(5);
    search(9);

    return 0;
}
