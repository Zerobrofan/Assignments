#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *top = NULL;

//Push fucntion
void push(int value){
    node *new_node = new node;
    new_node->data = value;
    new_node->next = top;
    top = new_node;
}

//Pop function
int pop(){
    int value;
    if(top == NULL)
    {
        cout << "Stack is empty.(stack underflow)";
        return -1;
    }
    else{
        node* first_node = top;
        top = first_node->next;
        value = first_node->data;
        delete (first_node);
        return value;
    }
}

//Diplay function
void display()
{
    node *current;
    if (top == NULL)
    {
        cout << "Stack is empty (stack underflow).";
    }
    else{
    current = top;
    while(current != NULL) //I tried to figure this out for a very long time XD. Highlighted so I can remember it when studying.
    {
            cout << current->data << '\n';
            current = current->next;
    }
    }
}

//Display peek
int peek(){
    if (top == NULL)
    {
        cout << "Stack is empty (stack underflow).";
        return -1;
    }
    else{
        return top->data;
    }
}

int main()
{
    push(5);
    push(10);
    push(15);
    display();
    pop();
    cout << '\n';
    display();
    cout << '\n';
    cout<<"top is equal to: "<<peek();

    return 0;
}
