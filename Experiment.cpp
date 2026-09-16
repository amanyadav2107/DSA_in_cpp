#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert at beginning
void insertAtBeginning(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Insert at position
void insertAtPosition(Node* &head, int value, int position) {
    if (position == 1) {
        insertAtBeginning(head, value);
        return;
    }

    Node* newNode = new Node();
    newNode->data = value;

    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid position\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Display function
void display(Node* head) {
    Node* temp = head;
    cout << "List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;
    int choice, value, pos;

    // Only 3 operations
    for (int i = 1; i <= 3; i++) {
        cout << "\nEnter choice (1:Beg, 2:End, 3:Position): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            insertAtBeginning(head, value);
        }
        else if (choice == 2) {
            cout << "Enter value: ";
            cin >> value;
            insertAtEnd(head, value);
        }
        else if (choice == 3) {
            cout << "Enter value: ";
            cin >> value;
            cout << "Enter position: ";
            cin >> pos;
            insertAtPosition(head, value, pos);
        }
        else {
            cout << "Invalid choice\n";
            i--; // repeat this iteration
            continue;
        }

        // Display after each operation
        display(head);
    }

    return 0;
}