// Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head; // Temporary pointer to traverse the list
    while (temp != nullptr) {
        cout << temp->data << " "; // Print the current node's data
        temp = temp->next;         // Move to the next node
    }
    cout << endl;
}
// Function to insert a node at the end of the linked list
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data); // Create a new node
    if (head == nullptr) {
        head = newNode; // If list is empty, new node becomes head
        return;
    }
    
    Node* temp = head; // Temporary pointer to traverse the list
    while (temp->next != nullptr) {
        temp = temp->next; // Move to the last node
    }
    temp->next = newNode; // Insert new node at the end
}
