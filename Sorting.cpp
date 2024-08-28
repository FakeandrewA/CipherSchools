#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else
        {
            temp.push_back(arr[right++]);
        }
    }
    while(left<=mid)
    {temp.push_back(arr[left++]);}
    while(right<=high)
    {
        temp.push_back(arr[right++]);
    }
    for(int i = low; i<=high ;i++)
    {
        arr[i]=temp[i-low];
    }
}
void mergeSort(int arr[],int low,int high)
{
    if(low>=high)
    return;
    
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
    
}
int f(int arr[],int low,int high)
{
   int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high)
        i++;
        while(arr[j]>pivot && j>=low)
        j--;
        if(i<j)
        {
            int x = arr[i];
            arr[i] = arr[j];
            arr[j] = x;
            
        }
    }
    int x = arr[low];
    arr[low]=arr[j];
    arr[j]=x;
    return j;
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int p = f(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}
void selectionSort(int arr[],int low,int high)
{
    for(int i = low;i<high;i++)
    {
        int min = i;
        for(int j = i;j<=high;j++)
        {
            if(arr[j]<arr[min])
            min=j;
    
        }
        int x = arr[i];
        arr[i]= arr[min];
        arr[min]=x;
    }
}
void insertionSort(int arr[],int low,int high)
{   for(int i=low;i<=high;i++)
    {
        int j = i ;
        while(j>0 && arr[j-1]>arr[j])
        {
            int x = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]= x;
            j--;
        }
    }
}
int main()
{
    int arr[5] = {4,1,5,23,2};
    insertionSort(arr,0,4);
    for(auto it:arr)
    cout<<it<<" ";
}
