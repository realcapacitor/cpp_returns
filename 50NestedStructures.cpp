//Nested structures : Stucture inside another structure, and Dot operator.
#include<iostream>
#include<string>
using namespace std;

struct address{
    int house_no;
    string street;
};

struct student{
    int roll_no;
    string name;
    address addr;
};

int main()
{
    student shivam;
    shivam.roll_no = 1234;
    shivam.name = "Shivam";
    shivam.addr.house_no = 4321;
    shivam.addr.street = "Dalal street";

    cout<<"Name : "<<shivam.name<<endl;
    cout<<"Roll No. : "<<shivam.roll_no<<endl;
    cout<<"Address : House no. "<<shivam.addr.house_no<<"\t"<<"Street : "<<shivam.addr.street<<endl;
    return 0;
}