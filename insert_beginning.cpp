#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = nullptr;

    Node* newNode = new Node();
    newNode->data = 10;
    newNode->next = head;
    head = newNode;

    cout << head->data;
    return 0;
}
