// #include <iostream>
// using namespace std;

// // Node structure
// struct Node {
//     int data;
//     Node* next;
// };

// // Function to insert at beginning
// void insertAtBeginning(Node* &head, int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = head;
//     head = newNode;
// }

// // Function to insert at end
// void insertAtEnd(Node* &head, int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = NULL;

//     if (head == NULL) {
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// // Function to insert at a specific position
// void insertAtPosition(Node* &head, int value, int position) {
//     if (position == 1) {
//         insertAtBeginning(head, value);
//         return;
//     }

//     Node* newNode = new Node();
//     newNode->data = value;

//     Node* temp = head;
//     for (int i = 1; i < position - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         cout << "Position out of range!\n";
//         return;
//     }

//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// // Function to traverse and display list
// void display(Node* head) {
//     if (head == NULL) {
//         cout << "List is empty.\n";
//         return;
//     }

//     Node* temp = head;
//     cout << "Linked List: ";
//     while (temp != NULL) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL\n";
// }

// // Main function
// int main() {
//     Node* head = NULL;
//     int choice, value, position;

//     do {
//         cout << "\n--- MENU ---\n";
//         cout << "1. Insert at Beginning\n";
//         cout << "2. Insert at End\n";
//         cout << "3. Insert at Position\n";
//         cout << "4. Display List\n";
//         cout << "5. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter value: ";
//                 cin >> value;
//                 insertAtBeginning(head, value);
//                 break;

//             case 2:
//                 cout << "Enter value: ";
//                 cin >> value;
//                 insertAtEnd(head, value);
//                 break;

//             case 3:
//                 cout << "Enter value: ";
//                 cin >> value;
//                 cout << "Enter position: ";
//                 cin >> position;
//                 insertAtPosition(head, value, position);
//                 break;

//             case 4:
//                 display(head);
//                 break;

//             case 5:
//                 cout << "Exiting...\n";
//                 break;

//             default:
//                 cout << "Invalid choice!\n";
//         }

//     } while (choice != 5);

//     return 0;
// }

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// LinkedList class
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Destructor (to free memory)
    ~LinkedList() {
        deleteList();
    }

    // Insert at beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Insert at specific position
    void insertAtPosition(int value, int position) {
        if (position <= 0) {
            cout << "Invalid position!\n";
            return;
        }

        if (position == 1) {
            insertAtBeginning(value);
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;

        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Position out of range!\n";
            delete newNode; // avoid memory leak
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Display list
    void display() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Count nodes
    int countNodes() {
        int count = 0;
        Node* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // Free memory
    void deleteList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Main function
int main() {
    LinkedList list;
    int choice, value, position;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Display List\n";
        cout << "5. Count Nodes\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                list.insertAtBeginning(value);
                list.display();
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                list.insertAtEnd(value);
                list.display();
                break;

            case 3:
                cout << "Enter value: ";
                cin >> value;
                cout << "Enter position: ";
                cin >> position;
                list.insertAtPosition(value, position);
                list.display();
                break;

            case 4:
                list.display();
                break;

            case 5:
                cout << "Total nodes: " << list.countNodes() << "\n";
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
