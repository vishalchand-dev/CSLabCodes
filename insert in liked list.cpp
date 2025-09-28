#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Insert a new node after a given node
void insertAfter(Node* prevNode, int val) {
    if (prevNode == NULL) return;

    Node* newNode = new Node(val);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Print list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // create linked list: 10 -> 20 -> 30 -> 40 -> 50
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "Before insertion: ";
    printList(head);

    // Insert 25 after node with data=20
    insertAfter(head->next, 25);

    cout << "After insertion: ";
    printList(head);

    return 0;
}

