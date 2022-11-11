#include <iostream>
using namespace std;

// This was alot easier than the stack actually.

//Array Size:
#define SIZE 5 

//Queue array
int queue[SIZE];

//Variables for the front and rear
int front = -1, rear = -1;

//Enqueue function
void enqueue(int value){
    if(rear != SIZE-1)
    {
        if(front ==-1 && rear==-1)
        {
            front++;
            queue[++rear] = value;
        }
        else{
            queue[++rear] = value;
        }
    }
    else{
        cout << "Queue is full.";
    }
}

// Dequeue function
void dequeue(){
    if(front != -1 && rear != -1 && front <= rear){
        front++;
    }
    else{
        cout << "Queue is empty!";
    }
}

// Display function
void display(){
    if (front != -1 && rear != -1 && front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << '\t';
        }      
    }
    else
    {
        cout << "Queue is empty!";
    }
}

int main(){

    enqueue(10);
    enqueue(15);
    enqueue(20);
    display();
    dequeue();
    cout << '\n';
    display();

}