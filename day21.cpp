#include <iostream>
using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    return newNode;
}

// Function to insert a node at a given position
void insertAtPosition(Node*& head, int pos, int x) {
    Node* newNode = createNode(x);
    
    // If inserting at the head (position 0)
    if (pos == 0) {
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    // Traverse to the position where we need to insert
    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    // If we are inserting at the end
    if (temp->next == nullptr) {
        temp->next = newNode;
        newNode->prev = temp;
    } else {
        // Insert in the middle of the list
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
}

// Function to print the doubly linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a sample doubly linked list: 2 <-> 4 <-> 5
    Node* head = createNode(2);
    head->next = createNode(4);
    head->next->prev = head;
    head->next->next = createNode(5);
    head->next->next->prev = head->next;

    // Print the original list
    cout << "Original Linked List: ";
    printList(head);

    // Insert node with value 6 at position 3 (0-based indexing)
    int p = 2;  // Given position
    int x = 6;  // Value to insert
    insertAtPosition(head, p + 1, x);  // Insert at position 3 (after 4 and 5)

    // Print the updated list
    cout << "Updated Linked List after insertion: ";
    printList(head);

    return 0;
}
#include <iostream>
using namespace std;

// Node structure for singly linked list
struct ListNode {
    int data;
    ListNode* next;
};

// Function to create a new node
ListNode* createNode(int data) {
    ListNode* newNode = new ListNode();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to detect cycle in the linked list
bool detectCycle(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return false;
    }

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        // If slow and fast meet, there is a cycle
        if (slow == fast) {
            return true;
        }
    }

    return false;  // No cycle detected
}

int main() {
    // Create a sample linked list: 3 -> 2 -> 0 -> -4, and create a cycle
    ListNode* head = createNode(3);
    head->next = createNode(2);
    head->next->next = createNode(0);
    head->next->next->next = createNode(-4);

    // Create a cycle: last node (-4) points to the 2nd node (index 1)
    head->next->next->next->next = head->next;

    // Detect cycle
    bool hasCycle = detectCycle(head);

    // Output the result
    if (hasCycle) {
        cout << "True" << endl;  // Cycle detected
    } else {
        cout << "False" << endl;  // No cycle detected
    }

    return 0;
}
