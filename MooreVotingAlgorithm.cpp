#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//dutch national flag algorithm
void MooresVotingAlgorithm(int arr[],int low,int high)
{
    int l = low;
    int count =0;
    for(int i=low;i<high;i++){
        if(arr[i]==arr[l])
        count++;
        else
        count--;
        
        if(count == 0)
        {
            l=i+1;
        }
    }
    cout<<arr[l];
}
//verify;
int main()
{
    int arr[9] = {2,2,1,3,1,1,3,1,1};
    MooresVotingAlgorithm(arr,0,8);
}
