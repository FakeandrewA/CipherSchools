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
void traverse(Node* head)
{
    Node* curr = head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr= curr->next;
    }
}
Node* IAB(Node* head,int v)
{
    Node* newNode = new Node(v);
    if(head==nullptr)
    return newNode;
    
    newNode->next= head;
    head = newNode;
    return head;
}
Node* IAE(Node* head,int v)
{
    Node* newNode = new Node(v);
    if(head == nullptr)
    return newNode;
    
    Node* curr = head;
    while(curr->next != nullptr)
        curr= curr->next;
    curr->next = newNode;
    return head;

}
Node* IAP(Node* head,int pos,int v)
{
    Node* newNode = new Node(v);
    if(head == nullptr)
    return newNode;
    if(pos==1)
    {
        head = IAB(head,v);
        return head;
    }
    Node* curr = head;
    for(int i = 1 ; i < pos-1 && curr->next!=nullptr ; i++ )
    {
        curr = curr->next;
    }
    if(curr->next!=nullptr)
    {
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
    }
    else
    {
        curr->next = newNode;
        return head;
    }
}
Node* DAS(Node* head)
{
    Node* waste = head;
    head = head->next;
    delete(waste);
    return head;
}
Node* DAE(Node* head)
{
    Node* curr = head;
    while(curr->next->next != nullptr)
    {
        curr=curr->next;
    }
    delete(curr->next);
    curr->next = nullptr;
    return head;
}
Node* DAP(Node* head,int pos)
{
    if(pos==1)
    {
        head = DAS(head);
        return head;
    }
    Node* curr = head;
    for(int i = 1;i<pos-1 && curr!=nullptr;i++)
    {
        curr = curr->next;
    }
    if(curr == nullptr || curr->next == nullptr)
    {
        cout<<"Out of bounds";
        return head;
    }
    Node* temp = curr->next;
    curr->next = curr->next->next;
    delete(temp);
    return head;
}
int main() {
    Node* head = nullptr;
    head = IAB(head,10);
    head = IAB(head,11);
    head = IAB(head,12);
    head = IAB(head,13);
    head = IAP(head,7,9);
    head = DAP(head,5);
    traverse(head);

    return 0;
}
