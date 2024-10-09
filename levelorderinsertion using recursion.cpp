// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int v)
    {
        data = v;
        left = nullptr;
        right = nullptr;
    }
};

Node* insertLevelOrder(int arr[],int i,int n)
{
    if(i>=n)
    return nullptr;
    
    Node* root = new Node(arr[i]);
    
    root->left=insertLevelOrder(arr,(2*i)+1,n);
    
    root->right=insertLevelOrder(arr,(2*i)+2,n);
    
    return root;
}

void inorder(Node* root)
{
    if(root==nullptr)
    return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}

int main() {
   
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   Node* root = insertLevelOrder(arr,0,10);
   inorder(root);

    return 0;
}
