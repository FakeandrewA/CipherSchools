// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Node
{
    int data;
    int b_f;
    Node* left;
    Node* right;
    Node(int d)
    {
        data = d;
        b_f = 0;
        left = nullptr;
        right = nullptr;
    }
};
void inorder(Node* root)
{
    if(root==nullptr)
    return;
    
    inorder(root->left);
    cout<<root->data<<" b:"<<root->b_f<<endl;
    inorder(root->right);
    
}
Node* RRR(Node* root)
{       
    Node* curr = root->right;
    curr->b_f = 0;
    
    curr->left = new Node(root->data);
    curr->left->b_f = 0;
    
    
    curr->right->b_f = 0;
    
    delete root;
    return curr;
}
Node* insertBST(Node* root, int v)
{
    if(root==nullptr)
    return new Node(v);
    
    if(root->b_f == -2)
    {
        if(root->right->b_f == -1)
        {
            root = RRR(root);
        }
    }
    
    if(root->data>v)
    {
        root->b_f+=1;
        root->left = insertBST(root->left,v);
    }
    else
    {
        root->b_f-=1;
        root->right = insertBST(root->right,v);
        
    }
    
    return root;
}
Node* buildBST(int arr[],int n)
{
    Node* root =nullptr;
    for(int i=0;i<n;i++)
    {
        root=insertBST(root,arr[i]);
    }
    return root;
}


int main() {
    
    int arr[7]={5,1,2,3,4,6,7};
    Node* root = nullptr;
    root = buildBST(arr,5);
    inorder(root);
}
