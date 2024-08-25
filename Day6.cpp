#include<iostream>
using namespace std;

//1_Sum of array
int sumArray(int arr[],int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
    {
      sum+=arr[i];
    }
  return sum;
}

//2_sum of odd and even numbers
void sumOfOddEven(int arr[],int n)
{
  int odd=0;
  int even=0;
  for(int i=0;i<n;i++)
    {
      if(arr[i]%2==0)
      even+=arr[i];
      else
      odd+=arr[i];
    }
  cout<<"Sum of Odd numbers: "<<odd<<endl;
  cout<<"Sum of Even numbers: "<<even;
}

//3_count of odd and even numbers
void countOddEven(int arr[],int n)
{
  int oddeven[2]={0};
  for(int i=0;i<n;i++)
    {
      if(arr[i]%2==0)
      oddeven[0]+=1;
      else
      oddeven[1]+=1;
    }
  cout<<"Number of Odd numbers: "<<oddeven[1]<<endl;
  cout<<"Number of Even numbers: "<<oddeven[0];
}


