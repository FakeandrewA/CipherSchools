// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Node
{
    int data;
    int h;
    Node* left;
    Node* right;
    Node(int d)
    {
        data=d;
        h=1;
        left=nullptr;
        right=nullptr;
    }
};

int height(Node* root)
{
    return root?root->h:0;
}
int balance(Node* root)
{
    return root?height(root->left)-height(root->right):0;
}
Node* LL(Node* x)
{
    Node* y = x->right;
    Node* T2 = y->left;
    
    //rotation
    y->left = x;
    x->right = T2;
    
    //update h
    x->h = 1+max(height(x->left),height(x->right));
    y->h = 1+max(height(y->left),height(y->right));
    
    return y;
}
Node* RR(Node* x)
{
    Node* y = x->left;
    Node* T2 = y->right;
    
    //rotation 
    y->right = x;
    x->left = T2;
    
    //update h
    x->h = 1+max(height(x->left),height(x->right));
    y->h = 1+max(height(y->left),height(y->right));
    
    return y;
}
Node* insertAVL(Node* root,int v)
{
    if(root == nullptr)
    return new Node(v);
    
    if(root->data>v)
    root->left = insertAVL(root->left,v);
    else if(root->data<v)
    root->right = insertAVL(root->right,v);
    else
    return root;
    
    root->h = 1 + max(height(root->left),height(root->right));
    
    int b = balance(root);
    
    //LL case (RR rotation)
    if(b>1 && root->left->data > v)
    {
        return RR(root);
    }
    //RR case (LL rotation)
    if(b<-1 && root->right->data < v)
    {
        return LL(root);
    }
    //LR case (double rotation)
    if(b>1 && root->left->data < v)
    {
        root->left = LL(root->left);
        return RR(root);
    }
    
    //RL case (double rotation)
    if(b<-1 && root->right->data > v)
    {
        root->right = RR(root->right);
        return LL(root);
    }
    
    return root;
}
Node* buildAVL(int arr[],int n)
{
    Node* root = nullptr;
    for(int i=0;i<n;i++)
    root = insertAVL(root,arr[i]);
    
    return root;
}
void preorder(Node* root)
{
    if(root==nullptr)return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
Node* minnode(Node* root)
{
    Node* curr = root;
    while(curr->left !=nullptr)
    curr=curr->left;
    
    return curr;
}
Node* deleteNode(Node* root,int k)
{
    if(root==nullptr)return root;
    
    if(k<root->data)
    root->left = deleteNode(root->left,k);
    else if(k>root->data)
    root->right = deleteNode(root->right,k);
    else
    {
        if(root->left==nullptr || root->right==nullptr)
        {
            Node* temp = root->left ?root->left:root->right;
            
            if(temp==nullptr)
            {
                temp = root;
                root = nullptr;
            }
            else
            {
                *root = *temp;
            }
            delete temp;
        }
        else
        {
            Node* temp = minnode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right,temp->data);
        }
        
        if(!root)
        return root;
        
        //update h
        root->h = 1+max(height(root->left),height(root->right));
        
        int b = balance(root);
        
        //LL case 
        if(b > 1 && balance(root->left)>=0)
        return RR(root);
        
        //LR case
        if(b>1 && balance(root->left)< 0)
        {
            root->left = LL(root->left);
            return RR(root);
        }
        
        //RR case
        if(b<-1 && balance(root->right)<=0)
        return LL(root);
        
        //RL case 
        if(b<-1 && balance(root->right)>0)
        {
            root->right = RR(root->right);
            return LL(root);
        }
        
    }
    return root;
}
int main()
{
    int arr[10]={5,1,2,3,4,6,7,8,9,0};
    Node* root=nullptr;
    root = buildAVL(arr,10);
    root = deleteNode(root,6);
   preorder(root);
}
