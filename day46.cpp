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
int maxvalue(Node* root)
{
    if(root==nullptr)
    return 0;
    
    int left = maxvalue(root->left);
    int right = maxvalue(root->right);
    
    return max(root->data,max(left,right));
}
int count(Node* root)
{
    if(root==nullptr)
    return 0;
    
    int left = count(root->left);
    int right = count(root->right);
    
    return 1+left+right;
}
int height(Node* root)
{
    if(root==nullptr)
    return 0;
    
    int left = height(root->left);
    int right = height(root->right);
    
    return 1+max(left,right);
}
int main()
{   int arr1[5]={1,2,3,4,5};
    Node* root1 = ilo(arr1,0,5);
    cout<<"Height of the tree: "<<height(root1)<<endl;
    int arr2[5]={1,2,3,4,5};
    Node* root2=ilo(arr2,0,5);
    cout<<"Total number of nodes: "<<count(root2)<<endl;
    int arr3[5]={10,20,30,40,50};
    Node* root3 = ilo(arr3,0,5);
    cout<<"Maximum value: "<<maxvalue(root3);
    
}
