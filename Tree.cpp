// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};
Node* ilo(int arr[],int i,int n)
{
    if(i>=n)return nullptr;
    
    Node* root = new Node(arr[i]);
    
    root->left = ilo(arr,i*2 +1,n);
    root->right = ilo(arr,i*2 +2,n);
    
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
void inorder2(Node* root)
{
    
    stack<Node*>s;
    Node* curr = root;
    while(true)
    {   
        if(curr!=nullptr)
        {
            s.push(curr);
            curr=curr->left;
        }
        else
        {
            if(s.empty())break;
            cout<<s.top()->data<<" ";
            curr=s.top();
            s.pop();
            curr=curr->right;
        }
        
    }
    
}
void preorder(Node* root)
{
    if(root==nullptr) return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}
void preorder2(Node* root)
{
    stack<Node*>s;
    s.push(root);
    while(!s.empty())
    {
        Node* curr = s.top();s.pop();
        cout<<curr->data<<" ";
        if(curr->right)
        s.push(curr->right);
        if(curr->left)
        s.push(curr->left);
    }
}
void postorder(Node* root)
{
    if(root==nullptr)return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}
void postorder2(Node* root)
{
    stack<Node*>r;
    stack<Node*>s;
    s.push(root);
    while(!s.empty())
    {
        Node* curr= s.top();s.pop();
        r.push(curr);
        if(curr->left)
        s.push(curr->left);
        if(curr->right)
        s.push(curr->right);
    }
    while(!r.empty())
    {
        cout<<r.top()->data<<" ";
        r.pop();
    }
    
}
int maxheight(Node* root)
{
    if(root==nullptr)
    return 0;
    
    int left = maxheight(root->left);
    int right = maxheight(root->right);
    
    return 1+max(left,right);
    
}
int isbalanced(Node* root)
{
   if(root==nullptr)
    return 0;
    
    int left = isbalanced(root->left);
    int right = isbalanced(root->right);
    if(left == -1 || right ==-1)
    {
        return -1;
    }
    if(abs(left-right)>1)
    return -1;
    
    return 1+max(left,right);
}
int diameter(Node* root,int & m)
{
    if(root==nullptr)
    return 0;
    
    int left = diameter(root->left,m);
    int right = diameter(root->right,m);
    m = max(m,left+right);
    return 1+max(left,right);
    
}
int maxsumpath(Node* root,int & m)
{
    if(root==nullptr)return 0;
    
    int left = maxsumpath(root->left,m);
    int right = maxsumpath(root->right,m);
    m = max(m,root->data+left+right);
    return root->data + max(left,right);
}
int main() {
    
    int arr[5]={1,2,3,4,5};
    Node* root = ilo(arr,0,5);
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->right->left = new Node(4);
    root1->right->left->left = new Node(5);
    root1->right->left->left->left = new Node(6);
    root1->right->right = new Node(7);
    root1->right->right->right = new Node(8);
    root1->right->right->right->right = new Node(9);
    
    
    postorder2(root1);
    int m=0;
    cout<<endl<<maxsumpath(root1,m);
    cout<<endl<<m;
    return 0;
}
