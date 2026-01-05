#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr};
    Node* temp = head;

    Node* newNode = new Node{20, nullptr};
    temp->next = newNode;

    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}
