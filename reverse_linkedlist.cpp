#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, nullptr}}};

    Node* prev = nullptr;
    Node* curr = head;

    while(curr) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;

    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}
