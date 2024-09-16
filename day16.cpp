// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};

Node* insertinsorted(Node* head,int value)
{   
    Node* newNode = new Node(value);
    if(head==nullptr)
    return newNode;
    
    if(head->data>value)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    
    Node* curr = head;
    while(curr->next!= nullptr)
    {
        if(curr->next->data > value)
        {
            newNode->next = curr->next;
            curr->next = newNode;
            return head;
        }
        else
        {
            curr = curr->next;
        }
    }
    curr->next = newNode;
    return head;
}
