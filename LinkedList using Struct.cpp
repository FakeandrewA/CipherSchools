#include<iostream>
#include<cstdlib>
using namespace std;
struct Node
{
    int data;
    Node* next;
    
    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};
void Traverse(Node* head)
{
    Node* current = head;
    while(current != nullptr)
    {
        cout<< current->data<<" ";
        current= current->next;
    }
}

Node* insertAtStart(Node* head,int Value)
{
    Node* newNode = new Node(Value);
    if(head==nullptr)
    {
        return newNode;
    }
    newNode->next = head;
    head = newNode;
    
    return head;
}

Node* insertAtEnd(Node* head,int Value)
{
    Node* newNode = new Node(Value);
    
    if(head==nullptr)
    {
        return newNode;
    }
    
    Node* current = head;
    while(current->next!=nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
    return head;
}
int main()
{
    Node* head;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head = insertAtStart(head,10);
    head=insertAtEnd(head,15);
    Traverse(head);
}
