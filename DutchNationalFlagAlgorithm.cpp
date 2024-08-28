#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//dutch national flag algorithm
void dutchNationalFlag(int arr[],int low,int high)
{
    int mid =low;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            int x = arr[mid];
            arr[mid] = arr[low];
            arr[low] = x;
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            int x = arr[mid];
            arr[mid] = arr[high];
            arr[high] = x;
            high--;
        }
    }
}
int main()
{
    int arr[16] = {0,2,1,2,0,0,1,2,1,0,1,2,0,0,0,1};
    dutchNationalFlag(arr,0,15);
    for(auto it:arr)
    cout<<it<<" ";
}
