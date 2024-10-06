#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int maxcone(vector<int>arr)
{
    int gmax = 0;
    int max = 0;
    
    for(int i =0;i<arr.size();i++)
    {
        if(arr[i]==1)
        max++;
        else
        {
            gmax = gmax > max ? gmax : max;
            max = 0;
        }
    }
    gmax = gmax > max ? gmax : max;
    
    return gmax;
    
    
    return max;
}
int main() {
    // Write C++ code here
    vector<int>arr = {1,1,1,1,0,0,1,1,0,1,1,1,1,1,1,1};
    
    cout << maxcone(arr);

    return 0;
}
