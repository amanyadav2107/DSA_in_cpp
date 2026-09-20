// #include <iostream>
// using namespace std;

// class Node {
//   public:
//   int data;
//   Node * next;

//   // Constructor
//   Node(int value) {
//     data = value;
//     next = NULL;
//   }
// };

// // Function to create a new node
// Node * createNode(int value) {
//   // call constructor
//   Node * newNode = new Node(value); 
//   return newNode;
// }

// int main() {
//   int value;
//   cin >> value;

//   Node * node = createNode(value);

//   cout << "Node created successfully!" << endl;
//   cout << "Data = " << node -> data << endl;
//   // will display 0 or NULL
//   cout << "Next = " << node -> next << endl; 

//   return 0;
// }


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to insert at the beginning
void insertAtBeginning(Node* &head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;  // link new node to current head
    head = newNode;        // update head to new node
}

// Function to display the list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;  // initially empty list

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);

    display(head);  // Output: 30 -> 20 -> 10 -> NULL

    return 0;
}
