#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, nullptr}}};

    Node* temp = head;
    head = head->next;
    delete temp;

    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}
