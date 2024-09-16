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

int main()
{
    Node* head = new Node(6);
}
