// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Node{
    Node* prev;
    int data;
    Node* next;
    Node(int d)
    {
        prev = nullptr;
        data= d;
        next = nullptr;
    }
};

Node* IAS(Node* head,int val)
{
    Node* newNode = new Node(val);
    if(head==nullptr)
    {
        return newNode;
    }
    
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}

Node* IAB(Node* head,int val)
{
    Node* newNode = new Node(val);
     if(head==nullptr)
    {
        return newNode;
    }
    
    Node* curr = head;
    while(curr->next != nullptr)
    curr=curr->next;
    
    curr->next = newNode;
    newNode->prev = curr;
    return head;
    
}

void traverse(Node* head)
{
    Node* curr = head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
Node* findEnd(Node* head)
{
    Node* curr = head;
    while(curr->next != nullptr)
    curr=curr->next;
    return curr;
}
void rtraverse(Node* head)
{
    Node* tail = findEnd(head);
    while(tail!=nullptr)
    {
        cout<<tail->data<<" ";
        tail= tail->prev;
    }
}
Node* IAP(Node* head,int pos,int val)
{
    Node* newNode = new Node(val);
    
    if(pos==1)
    {
        head=IAS(head,val);
        return head;
    }
    Node* curr = head;
    for(int i = 1; i<pos-1 && curr!=nullptr ; i++)
    {
        curr= curr->next;
    }
    if(curr==nullptr)
    {
        return head;
    }
    if(curr->next!=nullptr)
    {
    newNode->next = curr->next;
    curr->next->prev = newNode;
    curr->next = newNode;
    newNode->prev = curr;
    return head;
    }
    else
    {
        head = IAB(head,val);
        return head;
    }
}
int main() {
    // Write C++ code here
    Node* head = IAS(head,9);
    head=IAS(head,8);
    head=IAS(head,1);
    head=IAS(head,3);
    head=IAS(head,5);
    head=IAB(head,4);
    head = IAP(head,1,10);
    traverse(head);
    return 0;
}
