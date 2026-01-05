#include <iostream>
using namespace std;

#define SIZE 5
int queue[SIZE];
int front = 0, rear = -1;

void enqueue(int x) {
    if(rear == SIZE - 1) {
        cout << "Queue Full\n";
        return;
    }
    queue[++rear] = x;
}

void dequeue() {
    if(front > rear) {
        cout << "Queue Empty\n";
        return;
    }
    cout << "Removed: " << queue[front++] << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    dequeue();
    return 0;
}
