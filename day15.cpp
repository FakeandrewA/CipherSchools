// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//question 1
class Student
{
    private:
    string name;
    int Reg_no;
    public:
    void displayInfo()
    {
        cout<<this->name<<endl;
        cout<<this->Reg_no<<endl;

    }
};

struct Node
{
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
}

Node* deleteatNode(Node* head,int value)
{
    if(head==nullptr)
    return head;
    
    if(head->data == value)
    {
        Node* temp = head;
        head = head->next;
        delete(temp);
        return head;
    }
    
    Node* curr =  head;   
    while(curr->next != nullptr)
    {
        if(curr->next->data == value )
        {
            Node* temp = curr->next;
            curr = curr->next->next;
            delete(temp);
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
