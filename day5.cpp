#include<iostream>
using namespace std;

void oddEven(int n)
{
  if(n%2==0)
  cout<<"even";
  else
  cout<<"odd";
}

void reverse(string str)
{
  for(int i=str.length();i<=0;i++)
  cout<<str[i];
}

void countVowelsConsonants(string str)
{
  int v=0;
  int c = 0;
  for(int i=0;i<str.length();i++)
    {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
      {
        v++;
      }
      else
      {
        c++;
      }
    }
  cout<<"Vowels :"<<v<<endl;
  cout<<"Consonants:"<<c<<endl;
}
