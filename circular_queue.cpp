#include <iostream>
using namespace std;

#define SIZE 5
int cq[SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if((rear + 1) % SIZE == front) {
        cout << "Queue Full\n";
        return;
    }
    if(front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    cq[rear] = x;
}

void dequeue() {
    if(front == -1) {
        cout << "Queue Empty\n";
        return;
    }
    cout << "Removed: " << cq[front] << endl;
    if(front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    return 0;
}
