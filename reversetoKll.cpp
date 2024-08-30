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
Node* i(Node* head,int v)
{
    Node* newNode = new Node(v);

    if(head == nullptr)
    return newNode;
    Node* curr = head;
    while(curr->next!=nullptr)
    {
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}

void t(Node* head)
{
    Node* curr = head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

Node* r(Node* head)
{
    Node* prev =nullptr;
    Node* curr = head;
    Node* nextNode;
    Node* prev1 =nullptr;
    Node* curr1 = head;
    Node* nextNode1;
    int count = 0;
    while(curr!=nullptr && count<=1)
    {   count++;
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    curr1 = nextNode;
    while(curr1!=nullptr && count<=3)
    {   count++;
        nextNode1 = curr1->next;
        curr1->next = prev1;
        prev1 = curr1;
        curr1 = nextNode1;
    }
    
    Node* Pcurr = prev;
    while(Pcurr->next != nullptr)
    Pcurr = Pcurr->next;
    
    Pcurr->next = prev1;
    return prev;
}
int main() {
  
  Node* head = nullptr;
  head = i(head,10);//90 9 7 8 9 0 9
  head = i(head,12);
  head = i(head,11);
  head = i(head,14);
  head=r(head);
  t(head);
    
    return 0;
}
