#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> sort2darray(vector<vector<int>>arr,int n,int m)
{
    for(int i=0;i<n*m;i++)
    {
        int rmin =i/m,cmin=i%m;
        for(int j=i;j<n*m;j++)
        {
            if(arr[rmin][cmin]>arr[j/m][j%m])
            {
                rmin=j/m;
                cmin=j%m;
            }
            
        }
        int x = arr[rmin][cmin];
        arr[rmin][cmin]=arr[i/m][i%m];
        arr[i/m][i%m]=x;
    }
    return arr;
}
int main() {
    vector<vector<int>>v={{2,3,5,10},{6,7,8,89},{1,9,4,78}};
    v=sort2darray(v,3,4);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
