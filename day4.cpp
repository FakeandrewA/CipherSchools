#include<iostream>
using namespace std;
//1_arithmetic orperations

void op(int a,int b)
{ 
  cout<<"Addition: " <<a+b;
cout<<"Subtraction: " <<a-b;
cout<<"Multiplication: "<<a*b;
  if (b!=0)
cout<<"Division: " <<a/b;
  else
    cout<<"Undefined";
  if(b!=0)
cout<<"Modulus: "<<a%b;
  else
cout<<"Undefined";
}

//2_
