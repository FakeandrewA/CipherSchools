// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<bits/stdc++.h>

vector<int> bs(vector<vector<int>> arr,int n,int m,int t)
{
    int low = 0;
    int high = (n*m)-1;
    
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid/m][mid%m]==t)
        return {mid/m,mid%m};
        
        if(arr[mid/m][mid%m]<t)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return {-1,-1};
}

int sumof2d(vector<vector<int>> arr)
{
    int sum=0;
    for(int i =0 ;i<arr.size();i++)
    {
        for(int j =0;j<arr[0].size();j++)
        {
            sum+=arr[i][j];
        }
    }
    return sum;
}

int main()
{
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> v;
    v=bs(arr,3,3,9);
    cout<<v[0]<<" "<<v[1];
}
