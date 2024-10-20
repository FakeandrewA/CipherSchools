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
void preorder(Node* root)
{
    if(root==nullptr) return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}
int main()
{   int arr1[5]={1,2,3,4,5};
    Node* root1 = ilo(arr1,0,5);
    preorder(root1);   
  
    
}
