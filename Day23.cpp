#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool twosum(vector<int>arr,int t)
{
    sort(arr.begin(),arr.end());
    int i=0;
    int j=arr.size()-1;
    while(i<=j)
    {
        if(arr[i]+arr[j]==t)
        return 1;
        
        if(arr[i]+arr[j] > t)
        j--;
        else
        i--;
    }
    return 0;
}
