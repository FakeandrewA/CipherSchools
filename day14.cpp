// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//question 1
class car
{
    private:
    string brand_name;
    string model;
    string engine;
    int no_of_seats;
    public:
    void displayInfo()
    {
        cout<<brand_name<<endl;
        cout<<model<<endl;
        cout<<engine<<endl;
        cout<<no_of_seats;
    }
}

//question 2
class rectangle()
{
    private:
    int l;
    int b;
    public:
    rectangle(rectangle &obj)
    {
        l = obj.l;
        b = obj.b;
    }
}
