//Structures
#include<iostream>
using namespace std;
struct student{
    int rollNo;
    char sex;
    string name;
}ram;
int main()
{
    student shivam;
    shivam.name = "Shivam";
    student anil = {1111, 'M', "Anil"};
    student ram = {12, 'm' , "Ram"};
    cout<<shivam.name<<endl;
    cout<<anil.name<<endl;
    cout<<ram.name;
    return 0;
}